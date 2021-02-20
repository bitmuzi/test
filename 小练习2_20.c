#define _CRT_SECURE_NO_WARNINGS 1
//输出‘ K’型图案
#include<stdio.h>
int main()
{
	int n;
	int i, j;
	while (~scanf("%d", &n))
	{
		for (i = 0; i<n + 1; i++)
		{
			for (j = 0; j <= n - i; j++)
			{
				printf("* ");
			}
			for (j = 0; j<i; j++)
			{
				printf(" ");
			}
			printf("\n");
		}

		for (i = 0; i<n; i++)
		{
			for (j = 0; j<= i+1; j++)
			{
				printf("* ");
			}
			for (j = 0; j<n - i - 1; j++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
//矩阵转置
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int i, j;
	int arr1[10][10] = { 0 };
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			printf("%d ", arr1[j][i]);
		}
		printf("\n");
	}
	return 0;
}

//输入现在几点，要经过的分钟数，得到最终时间
#include<stdio.h>
int main()
{
	int h, m, k;
	scanf("%d:%d %d", &h, &m, &k);
	h = (h + (m + k) / 60) % 24;
	m = (m + k) % 60;
	printf("%02d:%02d", h, m);
	return 0;
}
//得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。
//请你回答他最后得到的数是多少。
#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int m, i = 0, sum = 0;
	scanf("%d", &n);
	while (n)
	{
		m = n % 10;
		if (m % 2 == 1)
		{
			m = 1;
		}
		else
		{
			m = 0;
		}
		sum += m*pow(10, i);
		i++;
		n /= 10;
	}
	printf("%d", sum);
	return 0;
}
//输出‘\’图案
#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			int j;
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
//杨辉三角，本质上是二项式(a + b)的n次方展开后各项的系数排成的三角形。
//其性质包括：每行的端点数为1， 一个数也为1；
//每个数等于它左上方和上方的两数之和。
#include <stdio.h>
int main(){
	int n;
	int i, j;
	int arr[30][30] = { 0 };
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (j == 0)
			{
				arr[i][0] = 1;
			}
			if (i>1 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//用筛选法求n以内的素数。筛选法求解过程为：
//将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，
//再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。
#include<stdio.h>
int main()
{
	int n;
	int count = 0;
	while (~scanf("%d", &n))
	{
		int i, a[101], j;
		for (i = 0; i < n; i++)
		{
			a[i] = i;
		}
		for (i = 2; i < n; i++)
		{
			for (j = i + 1; j <= n; j++)
			{
				if (a[j] % i == 0)
				{
					a[j] = 0;
				}
			}
		}
		for (i = 2; i <= n; i++)
		{
			if (a[i] > 0)
			{
				printf("%d ", a[i]);
			}
			else
				count++;
		}
		printf("\n%d\n", count);
	}
	return 0;
}
//KiKi和BoBo玩 “井”字棋。也就是在九宫格中，
//只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜。
//请根据棋盘状态，判断当前输赢。
#include<stdio.h>
int main()
{
	char ch[3][3] = { 0 };
	int i, j;
	char flag = 'o';
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			scanf("%c ", &ch[i][j]);
		}
	}
	for (i = 0; i<3; i++)
	{
		if (ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2])
		{
			flag = ch[i][0];
			break;
		}
		if (ch[0][i] == ch[1][i] && ch[1][i] == ch[2][i])
		{
			flag = ch[0][i];
			break;
		}
	}
	if (ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2])
	{
		flag = ch[1][1];
	}
	if (ch[0][2] == ch[1][1] && ch[1][1] == ch[2][0])
	{
		flag = ch[1][1];
	}
	if (flag == 'K')
	{
		printf("KiKi wins!");
	}
	else if (flag == 'B')
	{
		printf("BoBo wins!");
	}
	else
	{
		printf("No winner!");
	}
	return 0;
}