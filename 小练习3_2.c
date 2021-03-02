//题目描述
//输入一个华氏温度，要求输出摄氏温度。公式为 c = 5(F - 32) / 9，取位2小数。
//输入
//一个华氏温度，浮点数
//输出
//摄氏温度，浮点两位小数
#include<stdio.h>
int main()
{
	float f;
	scanf("%f", &f);
	printf("c=%.2f", 5*(f - 32) / 9);
	return 0;
}
//题目描述
//输入2个整数，求两数的平方和并输出。
//输入
//输入两个整数A和B，空格隔开
//输出
//A和B的平方和
//样例输入
//3 4
//样例输出
//25
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a *= a;
	b *= b;
	printf("%d", a + b);
	return 0;
}
//题目描述
//题目很简单，已知半径r，求一个圆的面积是多大。
//公式不用提了吧~~
//输入
//输入一个半径，浮点类型~
//输出
//输出它对应的面积大小，保留两位小数哦！
//样例输入
//2
//样例输出
//12.57
#include  <stdio.h>
int main()
{
	float r = 0.0;
	scanf("%f", &r);
	printf("%.2f", r*r*3.141592);
	return 0;
}

//题目描述
//输入一个长方形的长和宽（整数），
//输出该长方形的周长C和面积S，要求格式如例
//（请注意打印“C : ”、“S : ”，使用半角冒号，参考样例输出）。
//输入
//输入两个整数A和B，空格隔开
//输出
//分两行输出周长C和面积S
//样例输入
//2 5
//样例输出
//C : 14
//S : 10
#include<stdio.h>
int main()
{
	int length, width;
	scanf("%d%d", &length, &width);
	int c = (length + width)*2;
	int s = length * width;
	printf("C:%d\n", c);
	printf("S:%d\n", s);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	char*p = &a;
	*p = 1;
	return 0;
}
#include<stdio.h>
int main()
{

	return 0;
}
#include<stdio.h>
int main()
{
	printf("0%o 0X%X", 1234, 1234);
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char a1[100] = "hello bit!!!!!!!!!!!!!!!";
	char a2[100] = "~~~~~~~~~~~~~~~~~~~~~~~~";
	int sz = strlen(a1) - 1;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		a2[left] = a1[left];
		a2[right] = a1[right];
		printf("%s\n", a2);
		left++;
		right--;
		Sleep(1000);
		system("cls");
	}
	return 0;
}
