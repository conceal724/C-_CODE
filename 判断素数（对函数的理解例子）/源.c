
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int IsPrise(int val)
{
	int i;    //循环变量
	int n;    //存储变量
	for (i = 2; i < val; i++)
		if (val % i == 0)
			break;
	if (i == val)
		n = 1;
	else
		n = 0;
	return n;
}
int main()
{
	int m;
	printf("请输入要判断的数：");
	scanf("%d",&m);
	if (IsPrise(m))
		printf("YES!");
	else
		printf("NO!");
	return 0;
}