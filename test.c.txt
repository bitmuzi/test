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

