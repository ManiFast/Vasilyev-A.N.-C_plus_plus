#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	system("chcp 1251>nul");

	int n = 5, k = 1, count = 0;

	while (count < n)
	{
		if (k % 2)
		{
			cout << k << endl;
			count++;
		}

		k++;
	}

	system("pause>nul");
	return 0;
}