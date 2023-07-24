#include <iostream>

using namespace std;

int sumN(double n)
{
  int k = n, answ = 0;

  while (k > 0)
  {
    if ((k % 2) != 0) answ += k;

    k--;
  }

  return answ;
}

int main() {

  system("chcp 1251>nul");

  int n;
  cout << "Введите число:" << endl;
  cin >> n;
  cout << sumN(n) << endl;

  system("pause>nul");
  return 0;
}