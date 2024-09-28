#include <stdio.h>
#include <string.h>

int main()
{
	char str[101]{ '\0' };

	scanf_s("%s", str, sizeof(str));

	bool isPalen = true;
	int size = strlen(str);
	for (int i = 0; i < size / 2; ++i)
	{
		if (str[i] != str[size - 1 - i])
		{
			isPalen = false;
			break;
		}
	}

	printf("%d\n", isPalen ? 1: 0);

	return 0;
}