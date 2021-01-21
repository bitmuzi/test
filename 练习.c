#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3], i, k, j, temp;
	printf("please input 3numbers!\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 3 - 1; i++)
	{
		 k = i;
		 for (j = i + 1; j < 3; j++)
		 {
			 if (a[j]>a[k])
				 k = j;
		 }
		 temp = a[k];
		 a[k] = a[i];
		 a[i] = temp;
	}
	for (i = 0; i < 3;i++)
    	printf("%d ", a[i]);
	return 0;
}

#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	for (i = (a < b ? a : b); i>0; i--)
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	printf("%d和%d的最大公约数是%d\n", a, b, i);
	return 0;
}
#include<stdio.h>
能被4整除, 但不能被100整除;
能被400整除;
int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;
}
#include<stdio.h>
int is_prime(int n)
{
	int k;
	for (k = 2; k < n; k++)
	{
		if (n%k == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (is_prime(n))
		{
			printf("%d ", n);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	for (i = 3; i <= 100; i += 3)
	{
		printf("%d ",i);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int num, c=0;
	for (num = 1; num <= 100; num++)
	{
		if (num % 10 == 9)
			c++;
		else if(num / 10 == 9)
			c++;
	}
	printf("%d", c);
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[10] = { 0 }, i;
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;
}
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int k;
	for (k = 2; k <= sqrt(n); k++)
	{
		if (n%k == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	for (n = 101; n <= 200; n += 2)
	{
		if (is_prime(n))
		{
			printf("%d ", n);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	double sum=0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int i, j;
	{
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i ==j)
					printf("%d*%d=%d", j, i, j*i);
				else
					printf("%d*%d=%d ", j, i, j*i);
			}
			printf("\n");
		}
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]); // right位置的数据取不到

	while (left<right) // right位置没有数据，此处不需要添加=
	{
		int mid = left + (right - left) / 2;
		if (arr[mid]>key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
		{
			right = mid; // right位置的数据取不到，因此right=mid，不需要减1
		}
		else if (arr[mid]<key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
		{
			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}

	if (left >= right)
		printf("找不到\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int n;
	printf("请输入要二分查找的数字\n");
	scanf("%d", &n);
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz - 1;
	while (left <= right)
	{
		int mid = left + right;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
			
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，其下标为%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到该数\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr);
	printf("%d");
	return 0;
}
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
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
		for (i = 2; i <= n; i++)
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
#include<stdio.h>
int main()
{
	int a1[100][100] = { 0 }, a2[100][100] = { 0 };
	int m, n, i, j;
	scanf("%d%d", &m, &n);
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &a2[i][j]);
		}
	}
	int count = 0;
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (a1[i][j] == a2[i][j])
				count++;
		}
	}
	printf("%.2lf", count*100.0 / (m*n));
	return 0;
}