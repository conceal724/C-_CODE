#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<stdlib.h>
#include<iostream>

#define N 10
int num;

int Coins(int A[], int n, int left)
{
	if (n > 2)
	{
		int k = n / 3;
		int w1 = 0; int w2 = 0; int i = 0;
		for (i = left; i < left + k; i++) w1 += A[i];
		for (i = left + k; i < left + 2 * k; i++) w2 += A[i];
		num++;
		if (w1 == w2)
			return Coins(A, n - 2 * k, left + 2 * k);
		else
			return	Coins(A, 2 * k, left);
	}
	if (n == 1)
		return left;
	else
	{
		int out = left - 1;
		if (out < 0) out = left + n;
		num++;
		if (A[left] == A[out])
			return left + 1;
		else
			return left;
	}
}

int main()
{
	int A[N]; int i, n, left, r;
	cout << "请输入金币总数n（3<=n<=10):"; cin >> n;
	while (n < 3 || n>100)
	{
		cout << "请输入重新输入金币总数n(3<=n<=100):"; cin >> n;

	}
	for (i = 0; i < n; i++) A[i] = 1;
	int x = rand() % n; A[x] = 2; cout << "不合格金币位置x=" << x << endl;
	left = 0;
	num = 0;
	r = Coins(A, n, left);
	cout << "称重" << num << "次，找到不合格金币位置r=" << r << endl;
}

