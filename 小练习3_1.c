l#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int* p = NULL;
	*p = 10;
	printf("*p=%d", *p);
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d", &arr[9] - &arr[0]);

	return 0;
}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (e = 1; e <= 5; e++)
				{
					for (d = 1; d <= 5; d++)
					{
						if ((b == 2) + (a == 3) == 1 &&
							(b == 2) + (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) + (a == 1) == 1)
						{
							if (a*b*c*d*e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n",
									a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
#include <stdio.h>
int main()
{
	int a, b, c, d;

	return 0;
}

模拟函数递归实现strlen
#include <stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
递归实现strlen
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
指针—指针型
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[50] = "hdfbaadk";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[3][5] = { 0 };
	printf("%p\n", a);
	printf("%p\n", &a[0][0]);
	printf("%p\n", a[0]);
	printf("%p\n", a+1);
	printf("%p\n", &a[0][0]+1);
	printf("%p\n", a[0]+1);
	return 0;
}
#include <stdio.h>
int main()
{
	int a = 10;
	int *p = &a;
	int* *pp = &p;
	**pp = 200;
	printf("%d", a);
	return 0;
}

//有一头母牛，它每年年初生一头小母牛。
//每头小母牛从第四个年头开始，每年年初也生一头小母牛。
//请编程实现在第n年的时候，共有多少头母牛？
//输入
//输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
//n = 0表示输入数据的结束，不做处理。
//
//输出
//对于每个测试实例，输出在第n年的时候母牛的数量。
//每个输出占一行。
#include<stdio.h>
int main()
{
	int cow = 1;
	int new = 0;
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		new += cow;
		if (i % 4 == 0)
		{
			cow++;
		}
	}
	printf("%d\n", new);
	return 0;
}