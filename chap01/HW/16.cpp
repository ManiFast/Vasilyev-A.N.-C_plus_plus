#include <iostream>

using namespace std;

int main() {

  system("chcp 1251>nul");


  const int SIZE = 100;
  int arr[SIZE]{};

  int n = 0, k = 0;
  while (n < SIZE)
  {
    arr[k] = k * k;

    n++, k++;
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