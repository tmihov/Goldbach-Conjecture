#include "is_prime.h"

bool is_prime(int n)
{
	bool result = 1;
	int c;
	for (c = 2; c < n; c++)
	{
		if (n % c == 0)
		{
			result = 0;
			break;
		}
	}
	return result;
}