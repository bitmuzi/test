函数实现strlen,函数实现倒置数组元素
#include<stdio.h>
#include<assert.h>
int str(char *ch)
{
	int count = 0;
	assert(ch != NULL);
	while (*ch != '\0')
	{
		count++;
		ch++;
	}
	return count;
}
void f( char *ch)
{
	int ret = str(ch);
	char tmp = *ch;
	*ch = *(ch + ret - 1);
	*(ch + ret - 1) = '\0';
	if (str(ch+1)>2)
	   f(ch + 1);
	*(ch + ret - 1) = tmp;
}
int main()
{
	char ch[] = "ajdiasddsmd";
	f( ch);
	printf("%s", ch);
	return 0;
}

不产生第三变量交换两值
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

某数二进制位有几个一
方法1
#include<stdio.h>
int count(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);//该式可使得n的二进制最右边的1变为0
		count++;
	}
	return count;
}
方法2
int count_one_bit(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i & 1) == 1)
			count++;
	}
	return count;
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret=count_one_bit(n);
	printf("%d的二进制位有%d位", n, ret);
	return 0;
}

求两个数二进制中不同位的个数
方法1
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int i = 0,count=0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i)&1)!=((n >> i)&1))
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
方法2
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int ret = m^n;
	int count = 0;
	while (ret)
	{
		count++;
		ret = ret&(ret - 1);
	}
	printf("%d", ret);
	return 0;
}
打印整数二进制的奇数位和偶数位
#include<stdio.h>
void print(int m)
{
	int i = 0;
	for (i = 30; i >= 0; i -= 2)
	{
		printf("奇数位：%d ", (m >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("偶数位：%d ", (m >> i) & 1);
	}
}
int main()
{
	int m;
	scanf("%d", &m);
	print(m);
	return 0;
}
