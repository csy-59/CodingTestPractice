#include <stdio.h>

int main()
{
	int c;
	scanf_s("%d", &c);
	c /= 4;
	for (int i = 0; i < c; ++i)
	{
		printf("long ");
	}
	printf("int");
	return 0;
}