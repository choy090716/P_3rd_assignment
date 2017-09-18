#include <stdio.h>

int main()
{
	int i, n;
	float arr[100];
	float first = arr[0];
	float second = arr[0];

	printf("Enter total number of elements(1 to 100): ");
	scanf("%d", &n);
	printf("\n");

	
	for (i = 0; i < n; ++i)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%f", &arr[i]);
	}

	
	for (i = 1; i < n; ++i)
	{
		if (first < arr[i])
		{
			second = first;
			first = arr[i];
		}
		else if (second < arr[i])
		{
			second = arr[i];
		}

	}

	printf("Second Largest Element = %.2f\n", second);

	return 0;
}