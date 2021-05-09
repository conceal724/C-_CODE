#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int sum = 0,val,m;    //初始化变量
	printf("请输入要判断的数：");
	scanf("%d",&val);
	m = val;
	while (m)        //判断是否为回文数
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	if (sum == val)
		printf("该数是回文数！");
	else
		printf("该数不是回文数！");


	return 0;
}