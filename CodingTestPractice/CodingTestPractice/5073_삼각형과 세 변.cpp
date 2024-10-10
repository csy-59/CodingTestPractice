#include <stdio.h>

int main()
{
	while (true)
	{
		int a[3] = { 0 };
		int max = 0, index = 0;
		for (int i = 0; i < 3; ++i)
		{
			scanf_s("%d", &a[i]);
			if (max < a[i])
			{
				max = a[i];
				index = i;
			}
		}

		if (a[0] == 0)
			break;

		int sum = 0;
		for (int i = 0; i < 3; ++i)
		{
			if (index == i)
				continue;
			sum += a[i];
		}

		if (max >= sum)
		{
			printf("Invalid\n");
			continue;
		}

		if (a[0] == a[1] && a[1] == a[2] && a[2] == a[0])
		{
			printf("Equilateral\n");
			continue;
		}

		if (a[0] == a[1] || a[1] == a[2] || a[2] == a[0])
		{
			printf("Isosceles\n");
			continue;
		}

		printf("Scalene\n");
	}

	return 0;
}