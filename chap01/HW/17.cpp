#include <iostream>

using namespace std;

int main() {

  system("chcp 1251>nul");


  const int SIZE = 20;
  int arr[SIZE]{};

  int n = 0, k = 0;
  while (n < SIZE)
  {
    arr[n] = 2;

    n++;
  }
  arr[0] = 0;


  n = 0, k = 0;
  while (n < SIZE-1) // overload error
  {
    int i = n;
    while (i > 0)
    {
      arr[n+1] *= 2;

      i--;
    }

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