#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Max(x,y) (x>y?x:y)
int main()
{
	int a = 3121;
	int b = 3213;
	int max = Max(a, b);
	printf("max=%d", max);
	return 0;
}