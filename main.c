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

void pattern3()
{
	//4
	//43
	//432
	//4321

	for (int j = 4; j >= 1; j--) {
		for (int i = 4; i >= j; i--) {
			printf("%d", i);
		}
		printf("\n");
	}
}

void pattern4()
{
	//4321
	//432
	//43
	//4
	for (int j = 1; j <= 4; j++)
	{
		for (int i = 4; i >= j; i--)
		{
			printf("%d", i);
		}

		printf("\n");
	}

}


int main()
{
	//pattern1();
	//pattern2();
	//pattern3();
	pattern4();

	return 0;
}