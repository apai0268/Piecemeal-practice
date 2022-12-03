#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (year <= 2000||year>=3000)
	{
		printf("Invalid year!");
	}
	else 
	{
		int flag = 0;
		for (int i = 2000;i <= year;i++)
		{
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			{
				flag = 1;
				printf("%d\n", i);
			}
		}
		if (flag == 0)
		{
			printf("None");
		}
	}
		return 0;
	
}