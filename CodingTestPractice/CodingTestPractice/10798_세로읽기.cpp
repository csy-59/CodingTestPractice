#include <stdio.h>
#include <string.h>

int main()
{
	char str[5][16] = { '\0' };

	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%s", str[i], sizeof(str[i]));
	}

	int strLength = strlen(str[0]);
	for (int i = 0; i < strLength; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%c", str[j][i]);
		}
	}

	return 0;
}