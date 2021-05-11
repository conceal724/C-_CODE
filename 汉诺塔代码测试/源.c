#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hanoi(int n, char A, int B, char C);
void move(int n, char A, char C);
int c = 0;
int main()
{
    int n;                             //��¼���ӵ�����
    printf("���������ӵ�����:\n");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
void move(int n, char A, char C)         //���庯��,��n����ֱ�Ӵ�A�ƶ���C
{
    printf("��%d��:�����Ӵ� %c �ƶ��� %c ��\n", ++c, A, C);
    return;
}
void hanoi(int n, char A, int B, char C)  //���庯������n-1���̴�A�ƶ���B������CΪ������
{
    if (n == 1)
        move(1, A, C);                   //n=1ʱ��ֱ�ӽ����Ӵ�A�ƶ���C
    else
    {
        hanoi(n - 1, A, C, B);              //��һ������n-1���̴�A�ƶ���B������CΪ������
        move(n, A, C);                   //�ڶ�������n����ֱ�Ӵ�A�ƶ���C
        hanoi(n - 1, B, A, C);              //����������B���ϵ�n-1���̵ݹ����
    }
    return;
}
