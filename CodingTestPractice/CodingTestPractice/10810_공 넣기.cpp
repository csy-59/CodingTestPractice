#include <stdio.h>

int main()
{
	int arr[101] = { 0 };

	int n, m;
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < m; ++i)
	{
		int min, max, num;
		scanf_s("%d %d %d", &min, &max, &num);
		for (int j = min; j <= max; ++j)
		{
			arr[j] = num;
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}