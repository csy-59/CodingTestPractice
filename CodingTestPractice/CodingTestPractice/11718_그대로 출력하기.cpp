#include <stdio.h>

int main()
{
	char str[101];
	while (true)
	{
		scanf_s("%s", str, sizeof(str));
		if (str[0] == '\0' || str[0] == ' ')
			break;
		printf("%s\n", str);
	}


	return 0;
}