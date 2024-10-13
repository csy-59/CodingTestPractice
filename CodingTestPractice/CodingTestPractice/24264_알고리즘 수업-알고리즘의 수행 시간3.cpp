#include <stdio.h>

int main()
{
	long long n;
	scanf_s("%ll", &n);

	if (n == 1)
	{
		printf("%ll\n0", n * n);
		return 0;
	}

	printf("%ll\n2", n * n);

	return 0;
}