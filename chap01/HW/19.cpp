#include <iostream>

using namespace std;

int main() {

  system("chcp 1251>nul");


  const int SIZE = 20;
  int arr[SIZE]{};


  int n = 0, k = 0;
  while (n < SIZE)
  {
    arr[n] = n;

    n++;
  }

  n = 0, k = 0;
  while (n < SIZE)
  {
    // n -> index
    if ((n % 2) == 0) arr[n] = n;
    if ((n % 2) != 0) arr[n] = n * n;

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