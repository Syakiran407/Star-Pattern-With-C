#include <stdio.h>

void pattern1()
{
	for (int j = 1; j <= 4; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			printf("%d", i);
		}

		printf("\n");
	}
}

void pattern2()
{
	for (int j = 4; j >= 1; j--)
	{
		for (int i = 1; i <= j; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}

int main()
{
	//pattern1();
	pattern2();

	return 0;
}