
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int IsPrise(int val)
{
	int i;    //ѭ������
	int n;    //�洢����
	for (i = 2; i < val; i++)
		if (val % i == 0)
			break;
	if (i == val)
		n = 1;
	else
		n = 0;
	return n;
}
int main()
{
	int m;
	printf("������Ҫ�жϵ�����");
	scanf("%d",&m);
	if (IsPrise(m))
		printf("YES!");
	else
		printf("NO!");
	return 0;
}