#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int IsPrise(int m)
{
	int i;    //ѭ������
	int n;    //�洢����ֵ
	for (i = 2; i < m; i++)
	{
		if (m % i == 0)    //�ж��Ƿ�Ϊ����
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
	printf("������Ҫ�жϵõ����ķ�Χ��");
	scanf("%d",&val);
	traverseval(val);
	return 0;
}