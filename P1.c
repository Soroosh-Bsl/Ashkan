#include <stdio.h>

int isprime(int n)
{
	int i = ;
	for (i = 2; i * i <= n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", isprime(n));
}
