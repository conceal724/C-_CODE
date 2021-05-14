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
        printf("请输入第%d个元素:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("**********\n输入的数组为:");
    for (i = 0; i < count; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n输入要查找的数:");
    scanf("%d", &find);
    for (i = 0; i < count; i++)
    {
        if (a[i] == find)
        {
            printf("恭喜你找到了这个元素!\n");
            printf("请输入要修改为哪个数:");
            scanf("%d", &a[i]);
            break;
        }
    }
    if (i == count)
    {
        printf("很遗憾数组里面没有这个元素!");
    }
    else
        printf("目前数组为:");
    for (i = 0; i < count; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n输入要增加的数:");
    scanf("%d", &a[count]);
    count++;
    printf("目前数组为:");
    for (i = 0; i < count; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n输入要删除的数:");
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
        printf("\n目前数组为:");
        count--;
        for (i = 0; i < count; i++)
        {
            printf(" %d", a[i]);
        }
    }
    else
        printf("要删除的数不在数组中!");
    return 0;
}
