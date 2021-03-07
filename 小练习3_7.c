//检验平台为大端还是小端
#include <stdio.h>
int check()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int a = 1;
	if (check() == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
//给出a,b两数，求两数的最小公倍数
//1.普通解法
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int min = a > b ? a : b;
	while (min%a != 0 || min%b != 0)
	{
		min++;
	}
	printf("%d\n", min);
	return 0;
}
//2.公式：最小公倍数=a*b/最大公约数
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int mul = a*b;
	while (b)
	{
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	printf("%d\n", mul/a);
	return 0;
}
//设计程序使得I like beijing.可以逆置为beijing. like I
#include<stdio.h>
#include<string.h>
void reverse(char *left,char *right)
{
	while (left < right)
	{
		char tmp;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = "0";
	gets(arr);
	int len = strlen(arr);
	//逆序全部内容
	reverse(arr, arr + len - 1);
	char* start = arr;
	char* end = arr;
	//逆序单词
	while (*start)
	{
		end = start;
		while (*end != ' '&&*end!='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	puts(arr);
	return 0;
}
//杨辉三角
//1
//1 1 
//1 2 1    
//1 3 3 1
//由于此题要打印整个杨辉三角的数据而非取出某一项，
//所以不可避免的一定是要填出每一项，没有偷懒的余地，
//那就老老实实的根据规律填空即可。按照题设的场景，
//能发现数字规律为：d[i][j] = d[i - 1][j] + d[i - 1][j - 1]。
//所以我们只要按照这个方法填表即可。

void yangHuiTriangle(int n)
{
	int data[30][30] = { 1 }; //第一行直接填好，播下种子

	int i, j;

	for (i = 1; i < n; i++) //从第二行开始填
	{
		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
		for (j = 1; j <= i; j++) //从第二列开始填
		{
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
		}
	}

	for (i = 0; i < n; i++) //填完打印
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}
}

//改进：
//由于我在填第n行的杨辉三角时，只跟第n - 1行的杨辉三角产生联系，
//不会跟之前的有联系，所以没必要保存每一行的杨辉三角，填一行打一行就行了，
//这样能让空间复杂度从n ^ 2降低到n。
//但是在填数据的时候不能对之前的数据覆盖，所以需要从后向前填。
//而填杨辉三角顺序对结果是没有影响的，所以可以实现。
void yangHuiTriangle(int n)
{
	int data[30] = { 1 };

	int i, j;
	printf("1\n"); //第一行就直接打印了
	for (i = 1; i < n; i++) //从第二行开始
	{
		for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
		{
			data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
		}

		for (j = 0; j <= i; j++) //这一行填完就直接打印了。
		{
			printf("%d ", data[j]);
		}
		putchar('\n');
	}
}
//※这种方法虽然降低了空间复杂度，但只能保存最后一行的数据，
//不利于反复查询，两个填法各有各的适用场景。就本题而言，改进后的胜出。


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
	int murder[4] = { 0 };
	int i;
	for (i = 0; i < 4; i++)
	{
		murder[i] = 1;
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break;
		}
		murder[i] = 0;
	}
	putchar('A' + i);
	return 0;
}
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3)==1)&&
							((b == 2) + (e == 4)==1)&&
							((c == 1) + (d == 2)==1)&&
							((c == 5) + (d == 3)==1)&&
							((e == 4) + (a == 1)==1))
						{
							if (a*b*c*d*e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
								break;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}