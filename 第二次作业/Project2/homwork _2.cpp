#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main0()
{
	int a , b, temp;
	printf("������Ҫ���������������Կո����\n");
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("�������ֵΪ:\n%d %d", a, b);
	system("pause");
	return 0;
}

int main1()
{
	int a, b;
	printf("������Ҫ���������������Կո����\n");
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("�������ֵΪ:\n%d %d", a, b);
	system("pause");
	return 0;
}

int main2()
{
	int i, j[10];
	int max = j[0];
	printf("����������10������\n");
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
	printf("���ֵΪ%d:\n", max);
	system("pause");
	return 0;
}

int main3()
{
	int i, j[3] = { 4,5,6 }, temp;
	printf("��������Ϊ��4 5 6\n");
	//printf("����������3������\n");
	//for (i = 1; i <= 3; i++)
	//{
	//	scanf("%d", &j);
	//}
	printf("������������Ϊ:\n");
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
	printf("������������:\n");
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
			printf("���Լ��Ϊ%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}