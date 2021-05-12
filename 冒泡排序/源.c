#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#define N 5
int main()
{
	int i, j;            //循环变量
	int temp;           //临时变量
	int a[N];
	printf("请输入%d个整数:",N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);      //输入要排序的数
	printf("\n");               //换行
	for (i = 0; i < N; i++)            //外循环，循环N次
		for (j = 0; j < N-1; j++)        //内循环 相邻的两个数交换
			if (a[j] > a[j + 1])     //比较两个数的大小
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;      //交换两个数
			}
	printf("排序好之后的数组:\n");
	for (i = 0; i < N; i++)
		printf("%4d", a[i]);     //输出排序后数
	printf("\n");
	return 0;
}
