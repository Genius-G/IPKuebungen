#include <iostream>

int main(int argc, char** argv)
{
	int n = 10;
	// calculate the sum of all numbers from 1 to n
	int i;
	int sum = 0;
	for (int j = 1; j <= n; j = j+1)	//change: setze j statt i in Abbruchbedingung der for-Schleife
	{
		sum = sum + j;
	}
	std::cout << sum << std::endl;
	return 0;
}
