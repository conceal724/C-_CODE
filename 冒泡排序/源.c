#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#define N 5
int main()
{
	int i, j;            //ѭ������
	int temp;           //��ʱ����
	int a[N];
	printf("������%d������:",N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);      //����Ҫ�������
	printf("\n");               //����
	for (i = 0; i < N; i++)            //��ѭ����ѭ��N��
		for (j = 0; j < N-1; j++)        //��ѭ�� ���ڵ�����������
			if (a[j] > a[j + 1])     //�Ƚ��������Ĵ�С
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;      //����������
			}
	printf("�����֮�������:\n");
	for (i = 0; i < N; i++)
		printf("%4d", a[i]);     //����������
	printf("\n");
	return 0;
}
