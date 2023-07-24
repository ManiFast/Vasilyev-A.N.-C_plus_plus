#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	system("chcp 1251>nul");

	int n = 1;

	while (n <= 10)
	{
		cout << n << endl;
		n++;
	}

	system("pause>nul");
	return 0;
}