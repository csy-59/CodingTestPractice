#include <stdio.h>

int main()
{
	int arr[101] = { 0 };
	int n, m;
	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; ++i)
	{
		arr[i] = i;
	}

	int min, max;
	int temp[101] = { 0 };
	for (int i = 0; i < m; ++i)
	{
		scanf_s("%d %d", &min, &max);

		for (int j = 0; j <= max - min; ++j)
		{
			temp[j] = arr[max - j];
		}

		for (int j = 0; j <= max - min; ++j)
		{
			arr[min + j] = temp[j];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}