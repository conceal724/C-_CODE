#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hanoi(int n, char A, int B, char C);
void move(int n, char A, char C);
int c = 0;
int main()
{
    int n;                             //记录盘子的数量
    printf("请输入盘子的数量:\n");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
void move(int n, char A, char C)         //定义函数,将n号盘直接从A移动到C
{
    printf("第%d次:将盘子从 %c 移动到 %c 中\n", ++c, A, C);
    return;
}
void hanoi(int n, char A, int B, char C)  //定义函数，将n-1个盘从A移动到B，其中C为辅助盘
{
    if (n == 1)
        move(1, A, C);                   //n=1时，直接将盘子从A移动到C
    else
    {
        hanoi(n - 1, A, C, B);              //第一步，将n-1个盘从A移动到B，其中C为辅助盘
        move(n, A, C);                   //第二步，将n号盘直接从A移动到C
        hanoi(n - 1, B, A, C);              //第三步，将B盘上的n-1个盘递归调用
    }
    return;
}
