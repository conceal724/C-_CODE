#define _CRT_SECURE_NO_WARNINGS 


#include<stdio.h>
#define N 5
int main()
{
	int i, j;            //ѭ������
	int temp;           //��ʱ����
	int a[N];
	int k;              //��¼�±�
	printf("�������������:");
	for (j = 0; j < N; j++)
		scanf("%d", &a[j]);      //����Ҫ�������
	printf("\n");
	for (i = 0; i < N - 1; i++)  
	//��ѭ����ѭ��N��
	{
		k = i;
		for (j = i + 1; j < N; j++)      //��ѭ��
			if (a[k] > a[j])       //�Ƚ��������Ĵ�С
				k = j;                  //��¼���������±�
		if (i != k)
		{
			temp = a[k];
			a[k] = a[i];
			a[i] = temp;          //����λ��
		}
	}
	printf("�����֮�������:\n");
	for (j = 0; j < N; j++)
		printf("%4d", a[j]);     //����������
	printf("\n");
	return 0;
}
