#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	int maxX=-10000, minX = 10000, maxY= -10000, minY = 10000;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		scanf_s("%d %d", &x, &y);

		if (x < minX) minX = x;
		if (x > maxX) maxX = x;
		if (y < minY) minY = y;
		if (y > maxY) maxY = y;
	}

	int result = (maxX - minX) * (maxY - minY);
	result = result < 0 ? result * -1 : result;
	printf("%d", result);

	return 0;
}