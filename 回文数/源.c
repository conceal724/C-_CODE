#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int sum = 0,val,m;    //��ʼ������
	printf("������Ҫ�жϵ�����");
	scanf("%d",&val);
	m = val;
	while (m)        //�ж��Ƿ�Ϊ������
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	if (sum == val)
		printf("�����ǻ�������");
	else
		printf("�������ǻ�������");


	return 0;
}