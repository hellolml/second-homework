#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main1()
{
	int arr0[5], arr1[5], temp;
	printf("����������һ��5����,�Կո����\n");
	for (int i = 0; i < 5; i++){
		scanf("%d", &arr0[i]);
	}
	printf("��һ������arr0��ֵΪ:\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr0[i]);
	}
	printf("\n");
	printf("�������������5����,�Կո����\n");
	for (int i = 0; i < 5; i++){
		scanf("%d", &arr1[i]);
	}
	printf("�ڶ�������arr1��ֵΪ:\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5;i++){
		temp = arr0[i];
		arr0[i] = arr1[i];
		arr1[i] = temp;   
	}//����arr0��arr1�е�ֵ;
	printf("�������ֵΪ\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr0[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++){
		printf("%d\t", arr1[i]);
	}
	system("pause");
	return 0;
}