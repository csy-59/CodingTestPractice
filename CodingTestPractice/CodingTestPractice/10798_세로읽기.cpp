#include <stdio.h>
#include <string.h>

int main()
{
	char str[5][16];

	int maxLength = 0;
	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%s", str[i], sizeof(str[i]));
		if (maxLength < strlen(str[i]))
		{
			maxLength = strlen(str[i]);
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = strlen(str[i]); j <= maxLength; ++j)
		{
			str[i][j] = '\0';
		}
	}

	for (int i = 0; i < maxLength; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (str[j][i] == '\0')
				continue;

			printf("%c", str[j][i]);
		}
	}

	return 0;
}