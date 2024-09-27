#include <stdio.h>

int main()
{
	char str[101];
	scanf_s("%s", str, sizeof(str));

	int length = 0;
	for (int i = 0; i < 101; ++i)
	{
		if (str[i] == '\0')
		{
			printf("%d", length);
			break;
		}

		++length;
	}

	return 0;
}