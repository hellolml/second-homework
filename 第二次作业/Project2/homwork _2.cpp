#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main0()
{
	int a , b, temp;
	printf("请输入要交换的两个数，以空格隔开\n");
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("交换后的值为:\n%d %d", a, b);
	system("pause");
	return 0;
}

int main1()
{
	int a, b;
	printf("请输入要交换的两个数，以空格隔开\n");
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后的值为:\n%d %d", a, b);
	system("pause");
	return 0;
}

int main2()
{
	int i, j[10];
	int max = j[0];
	printf("请任意输入10个数：\n");
	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &j);
	}
	for (i = 0; i <10; i++)
	{
		if (max<j[i])
		{
			max = j[i];
		}
	}
	printf("最大值为%d:\n", max);
	system("pause");
	return 0;
}

int main3()
{
	int i, j[3] = { 4,5,6 }, temp;
	printf("这三个数为：4 5 6\n");
	//printf("请任意输入3个数：\n");
	//for (i = 1; i <= 3; i++)
	//{
	//	scanf("%d", &j);
	//}
	printf("三个数的排序为:\n");
	for (int a = 0; a < 3; a++)
	{
		for (int i = 0; i < 3-a; i++)
		{
			if (j[i] < j[i+1])
			{
				temp = j[i];
				j[i] = j[i+1];
				j[i+1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", j[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int main4()
{
	int a,b;
	printf("请输入两个数:\n");
	scanf("%d %d", &a, &b);
	int n = a;
	if (n > b)
	{
		n = b;
	}
	for (int i = n; i >= 1; i--)
	{
		if (a%i == 0 && b%i== 0)
		{
			printf("最大公约数为%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}