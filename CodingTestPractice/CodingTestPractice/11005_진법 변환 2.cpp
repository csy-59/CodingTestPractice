#include <stdio.h>
#include <memory.h>
#include <string.h>

int main()
{
	int n, b;
	scanf_s("%d %d", &n, &b);

	char result[101] = {  '\0' };
	while (n > 0)
	{
		int mod = n % b;
		n = (n - mod) / b;

		char tmp[101] = { '\0' };
		memcpy(tmp, result, strlen(result));
		memcpy(&result[1], tmp, strlen(tmp));

		char c;
		if (mod > 9)
		{
			c = mod - 10 + 'A';
		}
		else
		{
			c = mod + '0';
		}

		result[0] = c;
	}

	printf("%s", result);

	return 0;
}