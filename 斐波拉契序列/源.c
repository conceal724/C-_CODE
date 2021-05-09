
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int f1 = 1, f2 = 2, f3=0;     //初始化存储变量
	int i;      //循环变量
	int m;
	printf("请输入要查找的数的序列：");
	scanf("%d", & m);
	if (m == 1)         
		f3 = 1;
	else if (m == 2)
		f3 = 2;
	else
	{
		for (i = 3; i <=  m; i++)   //斐波拉契数的实现
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("查找的序列数为：%d", f3);
	return 0;
}