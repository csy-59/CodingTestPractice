#include <stdio.h>
#include <unordered_map>
#include <string.h>

int main()
{
	char className[51] = { '\0' };
	float credit = 0.0f;
	float fullCredit = 0.0f;
	char grade[3] = { '\0' };
	float result = 0.0f;
	for (int i = 0; i < 20; ++i)
	{
		scanf_s("%s %f %s", className, sizeof(className), &credit, grade, sizeof(grade));

		if (strcmp(grade, "P") == 0)
			continue;
		
		fullCredit += credit;

		float score = 0.0f;
		if (strcmp(grade, "A+") == 0)
		{
			score = 4.5f;
		}
		else if (strcmp(grade, "A0") == 0)
		{
			score = 4.0f;
		}
		else if (strcmp(grade, "B+") == 0)
		{
			score = 3.5f;
		}
		else if (strcmp(grade, "B0") == 0)
		{
			score = 3.0f;
		}
		else if (strcmp(grade, "C+") == 0)
		{
			score = 2.5f;
		}
		else if (strcmp(grade, "C0") == 0)
		{
			score = 2.0f;
		}
		else if (strcmp(grade, "D+") == 0)
		{
			score = 1.5f;
		}
		else if (strcmp(grade, "D0") == 0)
		{
			score = 1.0f;
		}
		else if (strcmp(grade, "F") == 0)
		{
			score = 0.0f;
		}

		result += score * credit;
	}

	printf("%f\n", result / fullCredit);
	return 0;
}