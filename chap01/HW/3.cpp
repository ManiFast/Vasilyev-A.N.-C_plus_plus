#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	system("chcp 1251>nul");

	int n;
	cout << "Введите количство чисел:" << endl;
	cin >> n;
	cout << endl;

	int k = 0, num = 0;
	while (k < n)
	{
		if ((num % 4) == 3)
		{
			cout << num << endl;
			k++;
		}

		num++;
	}
	
	

	system("pause>nul");
	return 0;
}