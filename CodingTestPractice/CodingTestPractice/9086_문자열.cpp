#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	char str[1001] = { '\0' };
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%s", str, sizeof(str));

		int length = 0;
		for (int i = 0; i < 101; ++i)
		{
			if (str[i] == '\0')
			{
				break;
			}

			++length;
		}

		printf("%c%c\n", str[0], str[length - 1]);
	}
}