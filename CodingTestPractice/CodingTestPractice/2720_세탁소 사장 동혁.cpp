#include <stdio.h>


void Cal(int total)
{
	int changes[4] = { 25, 10, 5, 1 };
	int n = 0;

	while (total > 0)
	{
		int tmp = total % changes[n];
		printf("%d ", (total - tmp) / changes[n]);
		total = tmp;
		++n;
	}
	
	for (; n < 4; ++n)
	{
		printf("0 ");
	}

	printf("\n");
}

int main()
{
	int n;
	scanf_s("%d", &n);

	
	for (int i = 0; i < n; ++i)
	{
		int test;
		scanf_s("%d", &test);
		Cal(test);
	}

	return 0;
}