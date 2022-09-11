#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* dst, const void* src, size_t num)
{
	void* start = dst;
	assert(dst && src);
	while (num--)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return start;
}
void print(int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	my_memcpy(arr2, arr1, 40);
	print(arr2, sz);
	return 0;
}