#include <iostream>

int main()
{
	int n; std::cin >> n;
	int answ = 0;

	for (int k = 0; k < n; k++)
		answ += (n-k)*(n-k)*(n-k-1);

	std::cout << answ << '\n';

	return 0;
}
