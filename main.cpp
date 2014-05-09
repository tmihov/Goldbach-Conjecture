#include <iostream>
#include "Goldbach.h"

int main()
{
	std::vector<int> res;
	res = Goldbach(100);
	std::cout << '[';
	for (int i = 0; i < res.size(); i = i + 2)
	{
		std::cout << '(' << res[i] << ',' << res[i + 1] << ')';
	}
	std::cout << "]\n";
	std::cin.get();
	std::cin.get();
	return 0;
}