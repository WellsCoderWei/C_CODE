#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>

using namespace sf;
const int WIDTH_BLOCK_COUNT = 20;  //��߿���
const int HEIGHT_BLOCK_COUNT = 12;
const int BlockSize = 64;
int GameWidth = BlockSize * WIDTH_BLOCK_COUNT;
int GameHeight = BlockSize * HEIGHT_BLOCK_COUNT;

int dir; //���� ȫ�ֱ���
const int SNAKE_LEN_MAX = 100; //����󳤶� �ṹ���� 
int snake_num = 4; //�߳�ʼ����4��
Sound eat;  //��ƻ��������

enum DIR
{
	LEFT,
	RIGHT,
	UP,
	DOWN,
};

//�ߡ�ƻ�� ��������
struct Position
{
	int x;
	int y;
};

//�ṹ������ ��ʾ�� �кܶ��Ա ÿ����Ա��һ��λ�� ��ʾ��������һ������
struct Position snake[SNAKE_LEN_MAX];
//ƻ����ʼ��λ�� �м�
struct Position apple = { WIDTH_BLOCK_COUNT / 2 , HEIGHT_BLOCK_COUNT / 2 };

void SnakeMove()
{
	//����ͷsnake[0]֮�⣬����ǰ�ƶ�һ��λ��
			   //�������һ�������1
	for (int i = snake_num - 1; i > 0; i--)
	{   //���һ������ ��ֵΪ ǰһ������
		snake[i].x = snake[i - 1].x;
		snake[i].y = snake[i - 1].y;
	}

	//������ͷλ�� ȡ���ڷ���
	if (dir == DIR::LEFT)   snake[0].x -= 1;
	if (dir == DIR::RIGHT)  snake[0].x += 1;
	if (dir == DIR::UP)     snake[0].y -= 1;
	if (dir == DIR::DOWN)   snake[0].y += 1;

	//��ͷײǽ Խ�紦��
	//�����ͷ x���� >= �߽�              x�����������
	if (snake[0].x >= WIDTH_BLOCK_COUNT)  snake[0].x = 0;
	if (snake[0].x < 0)                   snake[0].x = WIDTH_BLOCK_COUNT;
	if (snake[0].y > HEIGHT_BLOCK_COUNT)  snake[0].y = 0;
	if (snake[0].y < 0)                   snake[0].y = HEIGHT_BLOCK_COUNT;

	//��ƻ������
	if (snake[0].x == apple.x && snake[0].y == apple.y)
	{
		//��ͷ����ƻ����������+1
		snake_num++;

		//�����µ�ƻ��λ�� ������������  ��Ҫ��һ���Ż�������ƻ��������������
		while (1)
		{
			apple.x = rand() % WIDTH_BLOCK_COUNT;   //0~19
			apple.y = rand() % HEIGHT_BLOCK_COUNT;  //0~11
			if (apple.x != snake[snake_num].x && apple.y != snake[snake_num].y)
			{
				break;
			}
		}

		//������ ��β����ǰ��һλ �߳�����+1
		//   �����ӵ�λ����   ����     ԭ������β
		snake[snake_num - 1].x = snake[snake_num - 2].x;
		snake[snake_num - 1].y = snake[snake_num - 2].y;

		//���ų�ƻ����Ч
		eat.play();
	}

	//�����ͷ�����Լ����� �ض�ʣ�ಿ��
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

	//������Ϸ����      ����ģʽ ���
	RenderWindow window(VideoMode(GameWidth, GameHeight), "Greedy Snake");



	srand(time(0));

	

	//�����ӳ�
	Clock clock;  //����һ��ʱ��
	//ÿ��0.2s��һ��
	float delay = 0.2;  //���ӳ��ƶ�  0.2s == 200ms   1s == 1000ms
	//���Ķ���ʱ��
	float timer = 0;  //��ʱ��

	//����
	Texture t1, t2;
	//�������ͼƬ
	t1.loadFromFile("./image/apple1.png");
	t2.loadFromFile("./image/snake.png");
	//��ƻ�����ߵľ���  �������ʼ������
	Sprite spriteApple(t1);
	Sprite spriteSnake(t2);

	//��������
	SoundBuffer tmp;
	//������������
	tmp.loadFromFile("./music/eat.wav");  //תwav
	//����������ŵ�����������ȥ
	eat.setBuffer(tmp);


	while (window.isOpen())
	{
		//�ӿ� ÿ��ѭ������ʱ��
		//timeʱ��  ʹ��clockʱ����getElapsedTime�ӿ�
					 //�Լ�ʱ���ϴ�����֮�󣬵����ڼ�ʱ���Ѿ���������룿
		float time = clock.getElapsedTime().asSeconds(); //���ص�λת������
		//��ʱ�� �ۼƼ����ж����� (һ���ۼƸ��˶೤ʱ��)
		timer += time;
		//ÿ����һ�Σ��Ѽ�ʱ������
		clock.restart();

		Event e;
		while (window.pollEvent(e))
		{
			//����¼������ǹرմ���   
			if (e.type == Event::Closed)
			{                //::���������־��������һ��
				window.close();
			}
		}

		//�жϰ���
		//��������а�������ȥ         ��������           ������
		if (Keyboard::isKeyPressed(Keyboard::Left))   dir = DIR::LEFT;
		if (Keyboard::isKeyPressed(Keyboard::Right))  dir = DIR::RIGHT;
		if (Keyboard::isKeyPressed(Keyboard::Up))     dir = DIR::UP;
		if (Keyboard::isKeyPressed(Keyboard::Down))   dir = DIR::DOWN;

		//���ƶ� �ж�ʱ����
		//���ʱ�����0.2�룬�����߶�����
		if (timer > delay)
		{
			SnakeMove();
			//���ƶ��� �Ѽ�ʱ������
			timer = 0;
		}

		//���ƶ��� ������Ⱦ
		//��ɫˢ���������� �������
		window.clear(Color::White);
		//����
		Texture textureBackground;
		//�������ͼƬ
		textureBackground.loadFromFile("./image/grass.png");
		//��ƻ�����ߵľ���  �������ʼ������
		Sprite spriteBackground;
		spriteBackground.setTexture(textureBackground);
		spriteBackground.setPosition(0, 0);
		window.draw(spriteBackground);

		//���� �þ��黭
		for (int i = 0; i < snake_num; i++)
		{
			//          ����λ��    �������꣺����һ������ * ÿһ����(����)       
			spriteSnake.setPosition(snake[i].x * BlockSize, snake[i].y * BlockSize);
			//����ڼ��еڼ��У�����ʵ�����أ�����ÿһ���С
			//�ٻ�
			window.draw(spriteSnake);
		}

		//��ƻ��
		spriteApple.setPosition(apple.x * BlockSize, apple.y * BlockSize);
		window.draw(spriteApple);

		//��Ⱦ ˢ����ʾ
		window.display();
	}
	return 0;
}