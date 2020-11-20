#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int minMax(int num1, int num2, int num3)
{
	int x;
	if (num1 > num2 && num1 > num3)
	{
		x = 1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		x = 2;
	}
	else if (num3 > num1 && num3 > num2)
	{
		x = 3;
	}
	else if (num2 == num1 && num1 > num3)
	{
		x = 4;
	}
	else if (num2 == num3 && num2 > num1)
	{
		x = 5;
	}
	else if (num1 == num3 && num1 > num2)
	{
		x = 6;
	}
	else if (num1 == num2 && num2 == num3)
	{
		x = 7;
	}

	return x;
}
int main()
{
	struct infoStd
	{
		char name[100];
		int score;
	} std1, std2, std3;

	printf("Enter Name1 : ");
	scanf("%s", &std1.name);
	printf("Enter Score1 : ");
	scanf("%d", &std1.score);
	printf("\nEnter Name2 : ");
	scanf("%s", &std2.name);
	printf("Enter Score2 : ");
	scanf("%d", &std2.score);
	printf("\nEnter Name3 : ");
	scanf("%s", &std3.name);
	printf("Enter Score3 : ");
	scanf("%d", &std3.score);

	int numcase;

	numcase = minMax(std1.score, std2.score, std3.score);

	switch (numcase)
	{
	case 1:
		printf("\n%s has the most score.", std1.name);
		break;
	case 2:
		printf("\n%s has the most score.", std2.name);
		break;
	case 3:
		printf("\n%s has the most score.", std3.name);
		break;
	case 4:
		printf("\n%s and %s have the most score.", std1.name, std2.name);
		break;
	case 5:
		printf("\n%s and %s have the most score.", std2.name, std3.name);
		break;
	case 6:
		printf("\n%s and %s have the most score.", std1.name, std3.name);
		break;
	case 7:
		printf("\n%s , %s and %s have the same score.", std1.name, std2.name, std3.name);
		break;
	}
	return 0;
}