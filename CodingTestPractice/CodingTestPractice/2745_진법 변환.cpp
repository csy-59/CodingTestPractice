#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[101] = { '\0' };
	int n;
	
	scanf_s("%s %d", str, sizeof(str), &n);

	int length = strlen(str);
	int sNum = 1;
	int result = 0;
	while (length > 0)
	{
		--length;
		if (isdigit(str[length]) == 0)
		{
			result += sNum * (str[length] - 'A' + 10);
		}
		else
		{
			result += sNum * (str[length] - '0');
		}

		sNum *= n;
	}

	printf("%d", result);

	return 0;
}