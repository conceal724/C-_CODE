
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int f1 = 1, f2 = 2, f3=0;     //��ʼ���洢����
	int i;      //ѭ������
	int m;
	printf("������Ҫ���ҵ��������У�");
	scanf("%d", & m);
	if (m == 1)         
		f3 = 1;
	else if (m == 2)
		f3 = 2;
	else
	{
		for (i = 3; i <=  m; i++)   //쳲���������ʵ��
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("���ҵ�������Ϊ��%d", f3);
	return 0;
}