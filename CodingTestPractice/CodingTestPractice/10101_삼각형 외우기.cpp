#include <stdio.h>

int main()
{
	int angle[3] = { 0 };

	int sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		scanf_s("%d", &angle[i]);
		sum += angle[i];
	}

	if (sum != 180)
	{
		printf("Error");
		return 0;
	}

	if (angle[0] == angle[1] && angle[1] == angle[2] && angle[0] == angle[2])
	{
		printf("Equilateral");
		return 0;
	}

	if (angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2])
	{
		printf("Isosceles");
		return 0;
	}

	printf("Scalene");
	return 0;
}