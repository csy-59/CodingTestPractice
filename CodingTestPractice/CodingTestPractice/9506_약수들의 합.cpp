#include <stdio.h>
#include <vector>

void printPrime(int n)
{
	int sum = 0;
	std::vector<int> primes;
	for (int i = 1; i < n; ++i)
	{
		if (n % i == 0)
		{
			sum += i;
			primes.push_back(i);
		}
	}

	if (sum != n)
		printf("%d is NOT perfect.\n", n);
	else
	{
		printf("%d = %d", n, 1);
		for (int i = 1; i < primes.size(); ++i)
		{
			printf(" + %d", primes[i]);
		}
		printf("\n");
	}
}

int main()
{
	while (true)
	{
		int n;
		scanf_s("%d", &n);
		
		if (n == -1)
			break;

		printPrime(n);
	}

	return 0;
}