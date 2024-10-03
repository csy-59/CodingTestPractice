#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	int x = pow(2, n) + 1;
	int y = x * x;
	printf("%d", y);

	return 0;
}