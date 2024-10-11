#include <stdio.h>

int main()
{
	int a[3] = { 0 };
	scanf_s("%d %d %d", &a[0], &a[1], &a[2]);

	if (a[0] == a[1] && a[1] == a[2] && a[2] == a[0])
	{
		printf("%d", a[0] + a[1] + a[2]);
		return 0;
	}

	int max = 0, index;
	for (int i = 0; i < 3; ++i)
	{
		if (max < a[i])
		{
			max = a[i];
			index = i;
		}
	}

	int sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (index == i) continue;

		sum += a[i];
	}

	printf("%d", sum > max ? sum + a[index] : sum + sum - 1);

	return 0;
}