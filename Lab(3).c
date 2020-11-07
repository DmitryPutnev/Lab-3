#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int maximum(int* A)
{
	int i = 0;
	int max = 0;
	int H = A[i];
	if (A[i] >= 0)
	{
		if (A[i] > max)
			max = A[i];
	}
	else
	{
		if (-A[i] > max)
			max = -A[i];
	}

	for (i; i < 5; i++)
	{
		if (A[i] >= 0)
		{
			if (A[i] > max)
			{
				max = A[i];
				H = A[i];
			}
		}
		else
		{
			if (-A[i] > max)
			{
				max = -A[i];
				H = A[i];
			}
		}
	}
	return H;
}

int main()
{
	int A[5];
	int i = 0;
	int N = 0;
	printf("Enter 5 integers: \n");
	for (i; i < 5; i++)
	{
		printf("A[%d] = ", i);
		while (scanf("%d", &A[i]) != 1)
		{
			printf("Incorrect symbol.Please enter integer number: \n");
			printf("A[%d] = ", i);
			while (getchar() != '\n');
		}
	}

	N = maximum(A);
	printf("Result: %d", N);

	return 0;
}