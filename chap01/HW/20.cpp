#include <iostream>

using namespace std;

int main() {

  system("chcp 1251>nul");


  const int SIZE = 5;
  int arr[SIZE]{};

  cout << "Ведите поочередно через Enter или Space числа:" << endl;

  int n = 0, k = 0;
  while (n < SIZE) // overload error
  {
    cin >> arr[n];

    n++;
  }

  k = 0;
  while (k < SIZE)
  {
    cout << arr[k] << " ";

    k++;
  }

  system("pause>nul");
  return 0;
}