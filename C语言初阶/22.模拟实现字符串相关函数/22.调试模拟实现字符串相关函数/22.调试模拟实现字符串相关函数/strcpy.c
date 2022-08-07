#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* __cdecl my_strcpy(char* dst, const char* src)
{   //函数调用规定
    assert(dst && src);
    char* cp = dst;
    while (*cp++ = *src++);
    return dst;
}