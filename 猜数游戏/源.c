#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
IsNum(int guess);                /*定义函数判断输入的值是否符合标准*/
IsRight(int number, int guess);   /*定义函数比较输入的值与所猜的值的大小*/
int main()
{
	int guess;                   /*定义变量存储输入的值*/
	int number;                  /*定义变量存储所猜的值*/
	int count;
	printf("开始游戏，猜一个1-100的数！\n");       /*提示用户游戏开始*/
	srand((int)time(NULL));
	number = rand() % 100 + 1;                           /*生成一个随机数*/
	for (count = 0; count < 10; count++)                  /*循环10次，判断用户是否猜对*/
	{
		printf("请输入你猜的这个数:");
		scanf("%d", &guess);
		IsNum(guess);
		IsRight(number, guess);
		if (number == guess)
			break;
	}
	if (count == 10)
		printf("很遗憾你没有猜对，请猜下一个数！");

	return 0;
}
IsNum(int guess)                  /*定义函数判断输入的值是否符合标准*/
{
	if (guess < 0 || guess>100)
		printf("输入的数错误！\n");
	else
		return guess;                 /*返回输入的值*/
}
IsRight(int number, int guess)     /*定义函数判断用户是否猜对*/
{
	if (number > guess)
		printf("输入的数小了！\n");
	else if (number == guess)
		printf("恭喜你猜对了！\n");
	else
		printf("输入的数大了！\n");
	return guess;
}