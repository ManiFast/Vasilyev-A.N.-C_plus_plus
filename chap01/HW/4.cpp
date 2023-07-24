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

	int k = 0;

	const int N = 3;
	int arr[N]{1,1,0};

	cout << "1, 1, ";

	while (k < n)
	{
		arr[2] = arr[0] + arr[1];

		cout << arr[2] << ", ";

		arr[1] = arr[2];

		//switch
		int tp = arr[0];
		arr[0] = arr[1];
		arr[1] = tp;

		k++;
	}
	
	

	system("pause>nul");
	return 0;
}