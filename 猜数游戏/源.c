#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
IsNum(int guess);                /*���庯���ж������ֵ�Ƿ���ϱ�׼*/
IsRight(int number, int guess);   /*���庯���Ƚ������ֵ�����µ�ֵ�Ĵ�С*/
int main()
{
	int guess;                   /*��������洢�����ֵ*/
	int number;                  /*��������洢���µ�ֵ*/
	int count;
	printf("��ʼ��Ϸ����һ��1-100������\n");       /*��ʾ�û���Ϸ��ʼ*/
	srand((int)time(NULL));
	number = rand() % 100 + 1;                           /*����һ�������*/
	for (count = 0; count < 10; count++)                  /*ѭ��10�Σ��ж��û��Ƿ�¶�*/
	{
		printf("��������µ������:");
		scanf("%d", &guess);
		IsNum(guess);
		IsRight(number, guess);
		if (number == guess)
			break;
	}
	if (count == 10)
		printf("���ź���û�в¶ԣ������һ������");

	return 0;
}
IsNum(int guess)                  /*���庯���ж������ֵ�Ƿ���ϱ�׼*/
{
	if (guess < 0 || guess>100)
		printf("�����������\n");
	else
		return guess;                 /*���������ֵ*/
}
IsRight(int number, int guess)     /*���庯���ж��û��Ƿ�¶�*/
{
	if (number > guess)
		printf("�������С�ˣ�\n");
	else if (number == guess)
		printf("��ϲ��¶��ˣ�\n");
	else
		printf("����������ˣ�\n");
	return guess;
}