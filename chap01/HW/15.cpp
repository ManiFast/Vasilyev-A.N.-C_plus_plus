#include <iostream>

using namespace std;

int main() {

  system("chcp 1251>nul");


  const int SIZE = 107;
  int arr[SIZE]{};

  int n = 0, k = 0;
  while (n < SIZE)
  {
    if (n % 2 != 0)
    {
      arr[k] += n;
      k++;
    }

    n++;
  }

  k = 0;
  while (k < SIZE/2)
  {
    cout << arr[k] << " ";

    k++;
  }

  system("pause>nul");
  return 0;
}