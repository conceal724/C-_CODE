#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int IsPrise(int m)
{
	int i;    //循环变量
	int n;    //存储返回值
	for (i = 2; i < m; i++)
	{
		if (m % i == 0)    //判断是否为素数
			break;
	}
	if (m == i)
		n = 1;
	else
		n = 0;
	return n;
}
void traverseval(int val)
{
	int i;
	for (i = 2; i <= val; i++)
	{
		if (IsPrise(i))
			printf("%d\n", i);
	}
}
int main()
{
	int val;
	printf("请输入要判断得的数的范围：");
	scanf("%d",&val);
	traverseval(val);
	return 0;
}