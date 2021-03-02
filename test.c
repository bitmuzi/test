#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int input(int a[], int n);
int sort(int a[], int n);
int output(int a[], int n);
int main()
{
	int a[5];
	printf("please input 5 numbers\n");
	input(a, 5);
	printf("begin sort\n");
	sort(a, 5);
	printf("present results\n");
	output(a, 5);
	return 0;
}
int input(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
int sort(int a[], int n)
{
	int i, k, j, temp;
	for (i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[k] < a[j])
			{
				k = j;
			}
				
		}
		temp = a[k];
		a[k] = a[i];
		a[i] = temp;

	}
	return 0;
}
int output(int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
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
