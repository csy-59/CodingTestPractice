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

	for (int i = 0; i < m; ++i)
	{
		int b1, b2;
		scanf_s("%d %d", &b1, &b2);

		int temp = arr[b1];
		arr[b1] = arr[b2];
		arr[b2] = temp;
	}

	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}