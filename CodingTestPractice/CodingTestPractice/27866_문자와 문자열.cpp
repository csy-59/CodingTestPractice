#include <stdio.h>

int main()
{
	char str[1001] = { '\0' };
	int i;
	scanf_s("%s", str, sizeof(str));
	scanf_s("%d", &i);

	printf("%c", str[i - 1]);

	return 0;
}