#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    int a[N];
    int i;
    int find;
    int count = 5;
    int m;
    for (i = 0; i < count; i++)
    {
        printf("�������%d��Ԫ��:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("**********\n���������Ϊ:");
    for (i = 0; i < count; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n����Ҫ���ҵ���:");
    scanf("%d", &find);
    for (i = 0; i < count; i++)
    {
        if (a[i] == find)
        {
            printf("��ϲ���ҵ������Ԫ��!\n");
            printf("������Ҫ�޸�Ϊ�ĸ���:");
            scanf("%d", &a[i]);
            break;
        }
    }
    if (i == count)
    {
        printf("���ź���������û�����Ԫ��!");
    }
    else
        printf("Ŀǰ����Ϊ:");
    for (i = 0; i < count; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n����Ҫ���ӵ���:");
    scanf("%d", &a[count]);
    count++;
    printf("Ŀǰ����Ϊ:");
    for (i = 0; i < count; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n����Ҫɾ������:");
    scanf("%d", &m);
    for (i = 0; i < count; i++)
    {
        if (a[i] == m)
        {
            for(;i<count;i++)
                a[i] = a[i + 1];

        }
    }
    if (i == count + 1)
    {
        printf("\nĿǰ����Ϊ:");
        count--;
        for (i = 0; i < count; i++)
        {
            printf(" %d", a[i]);
        }
    }
    else
        printf("Ҫɾ����������������!");
    return 0;
}
