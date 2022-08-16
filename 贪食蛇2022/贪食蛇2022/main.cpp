#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>

using namespace sf;
const int WIDTH_BLOCK_COUNT = 20;  //宽高块数
const int HEIGHT_BLOCK_COUNT = 12;
const int BlockSize = 64;
int GameWidth = BlockSize * WIDTH_BLOCK_COUNT;
int GameHeight = BlockSize * HEIGHT_BLOCK_COUNT;

int dir; //方向 全局变量
const int SNAKE_LEN_MAX = 100; //蛇最大长度 结构常量 
int snake_num = 4; //蛇初始长度4节
Sound eat;  //吃苹果的声音

enum DIR
{
	LEFT,
	RIGHT,
	UP,
	DOWN,
};

//蛇、苹果 行列坐标
struct Position
{
	int x;
	int y;
};

//结构体数组 表示蛇 有很多成员 每个成员有一个位置 表示蛇身在哪一个坐标
struct Position snake[SNAKE_LEN_MAX];
//苹果初始化位置 中间
struct Position apple = { WIDTH_BLOCK_COUNT / 2 , HEIGHT_BLOCK_COUNT / 2 };

void SnakeMove()
{
	//出蛇头snake[0]之外，都向前移动一个位置
			   //蛇身最后一块数组减1
	for (int i = snake_num - 1; i > 0; i--)
	{   //最后一个坐标 赋值为 前一个坐标
		snake[i].x = snake[i - 1].x;
		snake[i].y = snake[i - 1].y;
	}

	//更新蛇头位置 取决于方向
	if (dir == DIR::LEFT)   snake[0].x -= 1;
	if (dir == DIR::RIGHT)  snake[0].x += 1;
	if (dir == DIR::UP)     snake[0].y -= 1;
	if (dir == DIR::DOWN)   snake[0].y += 1;

	//蛇头撞墙 越界处理
	//如果蛇头 x坐标 >= 边界              x坐标变成最左边
	if (snake[0].x >= WIDTH_BLOCK_COUNT)  snake[0].x = 0;
	if (snake[0].x < 0)                   snake[0].x = WIDTH_BLOCK_COUNT;
	if (snake[0].y > HEIGHT_BLOCK_COUNT)  snake[0].y = 0;
	if (snake[0].y < 0)                   snake[0].y = HEIGHT_BLOCK_COUNT;

	//吃苹果处理
	if (snake[0].x == apple.x && snake[0].y == apple.y)
	{
		//蛇头碰到苹果，蛇身体+1
		snake_num++;

		//生成新的苹果位置 随机数随机种子  需要进一步优化，避免苹果出现在蛇身上
		while (1)
		{
			apple.x = rand() % WIDTH_BLOCK_COUNT;   //0~19
			apple.y = rand() % HEIGHT_BLOCK_COUNT;  //0~11
			if (apple.x != snake[snake_num].x && apple.y != snake[snake_num].y)
			{
				break;
			}
		}

		//蛇坐标 从尾部向前移一位 蛇长度已+1
		//   新增加单位跟随   等于     原来的蛇尾
		snake[snake_num - 1].x = snake[snake_num - 2].x;
		snake[snake_num - 1].y = snake[snake_num - 2].y;

		//播放吃苹果音效
		eat.play();
	}

	//如果蛇头碰到自己身体 截断剩余部分
	for (int i = 1; i < snake_num; i++)
	{
		if (snake[i].x == snake[0].x && snake[i].y == snake[0].y)
		{
			snake_num = i;
			break;
		}
	}
}

int main()
{
	Music music;
	music.openFromFile("./music/bgm.wav");
	music.play();

	//创建游戏窗口      窗口模式 宽高
	RenderWindow window(VideoMode(GameWidth, GameHeight), "Greedy Snake");



	srand(time(0));

	

	//处理延迟
	Clock clock;  //定义一个时钟
	//每隔0.2s动一次
	float delay = 0.2;  //蛇延迟移动  0.2s == 200ms   1s == 1000ms
	//消耗多少时间
	float timer = 0;  //计时器

	//纹理
	Texture t1, t2;
	//纹理加载图片
	t1.loadFromFile("./image/apple1.png");
	t2.loadFromFile("./image/snake.png");
	//做苹果和蛇的精灵  用纹理初始化精灵
	Sprite spriteApple(t1);
	Sprite spriteSnake(t2);

	//声音缓存
	SoundBuffer tmp;
	//加载声音缓存
	tmp.loadFromFile("./music/eat.wav");  //转wav
	//把声音缓存放到声音变量里去
	eat.setBuffer(tmp);


	while (window.isOpen())
	{
		//接口 每次循环计算时间
		//time时间  使用clock时钟里getElapsedTime接口
					 //自计时器上次重启之后，到现在计时器已经间隔多少秒？
		float time = clock.getElapsedTime().asSeconds(); //返回单位转换成秒
		//计时器 累计计算有多少秒 (一共累计隔了多长时间)
		timer += time;
		//每计算一次，把计时器重启
		clock.restart();

		Event e;
		while (window.pollEvent(e))
		{
			//如果事件类型是关闭窗口   
			if (e.type == Event::Closed)
			{                //::域运算符标志它属于哪一个
				window.close();
			}
		}

		//判断按键
		//如果键盘有按键按下去         如果按左键           改左方向
		if (Keyboard::isKeyPressed(Keyboard::Left))   dir = DIR::LEFT;
		if (Keyboard::isKeyPressed(Keyboard::Right))  dir = DIR::RIGHT;
		if (Keyboard::isKeyPressed(Keyboard::Up))     dir = DIR::UP;
		if (Keyboard::isKeyPressed(Keyboard::Down))   dir = DIR::DOWN;

		//蛇移动 判断时间间隔
		//如果时间大于0.2秒，就让蛇动起来
		if (timer > delay)
		{
			SnakeMove();
			//蛇移动后 把计时器清零
			timer = 0;
		}

		//蛇移动后 画面渲染
		//白色刷新整个画面 清除黑屏
		window.clear(Color::White);
		//纹理
		Texture textureBackground;
		//纹理加载图片
		textureBackground.loadFromFile("./image/grass.png");
		//做苹果和蛇的精灵  用纹理初始化精灵
		Sprite spriteBackground;
		spriteBackground.setTexture(textureBackground);
		spriteBackground.setPosition(0, 0);
		window.draw(spriteBackground);

		//画蛇 用精灵画
		for (int i = 0; i < snake_num; i++)
		{
			//          设置位置    根据坐标：在哪一个坐标 * 每一块宽度(像素)       
			spriteSnake.setPosition(snake[i].x * BlockSize, snake[i].y * BlockSize);
			//数组第几行第几列，画成实际像素，乘以每一块大小
			//再画
			window.draw(spriteSnake);
		}

		//画苹果
		spriteApple.setPosition(apple.x * BlockSize, apple.y * BlockSize);
		window.draw(spriteApple);

		//渲染 刷新显示
		window.display();
	}
	return 0;
}