#define _CRT_SECURE_NO_WARNINGS 


#include<stdio.h>
#define N 5
int main()
{
	int i, j;            //循环变量
	int temp;           //临时变量
	int a[N];
	int k;              //记录下标
	printf("请输入五个整数:");
	for (j = 0; j < N; j++)
		scanf("%d", &a[j]);      //输入要排序的数
	printf("\n");
	for (i = 0; i < N - 1; i++)  
	//外循环，循环N次
	{
		k = i;
		for (j = i + 1; j < N; j++)      //内循环
			if (a[k] > a[j])       //比较两个数的大小
				k = j;                  //记录两个数的下标
		if (i != k)
		{
			temp = a[k];
			a[k] = a[i];
			a[i] = temp;          //交换位置
		}
	}
	printf("排序好之后的数组:\n");
	for (j = 0; j < N; j++)
		printf("%4d", a[j]);     //输出排序后数
	printf("\n");
	return 0;
}
