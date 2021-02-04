使用指针打印数组内容
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
void reverse(char *ch)
{
	int len = strlen(ch);
	char* left = ch;
	char* right = ch + len - 1;
	while (left<right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char ch[100] = { 0 };
	gets(ch);
	reverse(ch);
	printf("%s", ch);
	return 0;
}

求Sn=a+aa+aaa+aaaa+aaaaa......之和，其中a是一个数字，
#include<stdio.h>
int main()
{
	int a, n;
	scanf("%d%d", &a, &n);
	int i, k = 0, sum = 0;
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum = k + sum;
	}
	printf("%d", sum);
	return 0;
}

喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
法1
#include<stdio.h>
int main()
{
	int money;
	scanf("%d", &money);
	int all = 0;
	all += money;
	int empty = money;
	while (empty >= 2)
	{
		all += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", all);
	return 0;
}
法2
#include<stdio.h>
int main()
{
	int money;
	int all = 0;
	scanf("%d", &money);
	if (money > 0)
		all = money * 2 - 1;
	printf("%d", all);
	return 0;
}

0~100000"水仙花数"
#include<math.h>
#include<stdio.h>
int main()
{
	int i;
	for (i = 0; i < 100000; i++)
	{
		int k = i;
		int n = 1;
		int sum = 0;
		while (k / 10)
		{
			n++;
			k /= 10;
		}
		k = i;
		while (k)
		{
			sum += (int)pow(k % 10, n);
			k /= 10;
	    }
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


打印菱形
#include<stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int k;
		for (k = 0; k < n - 1 - i; k++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++)
	{
		int k;
		for (k = 0; k < i + 1; k++)
		{
			printf(" ");
		}
		for (k = 0; k < (n - i - 1) * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

一瓶酒m元钱，两个酒瓶可以换一瓶酒，
四个瓶盖可以换一瓶酒，
现在有 n 元钱，求最多可以喝多少瓶酒？
#include<stdio.h>
int main()
{
	int m=0, n=0;
	scanf("%d%d", &m, &n);
	int all=n/m;
	int empty=n/m, cap=n/m;
	while (empty>=2||cap>=4)
	{
		int i = empty / 2 + cap / 4;
		all = all + i;
		empty =i+empty % 2;
		cap = i + cap % 4;
	}
	printf("%d", all);
	return 0;
}

