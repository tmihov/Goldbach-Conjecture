#include <vector>
#include "Goldbach.h"
#include "is_prime.h"

std::vector<int> Goldbach(int n)
{
	std::vector<int> result;
	if (n < 4)
	{
		return result = std::vector<int> (1);
	}
	for (int i = 2; i <= n/2; i++)
	{
		int addend = n - i;
		if (is_prime(i) == 1 && is_prime(addend) == 1 && addend != 1)
		{
			result.push_back(i);
			result.push_back(addend);
		}
	}
	return result;
}