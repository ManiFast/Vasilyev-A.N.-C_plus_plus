#include <iostream>

using namespace std;

int fac(int x)
{
  int answ = 1;

  int k = x;
  while (k > 0)
  {
    answ = answ * k;
    k--;
  }

  return answ;
}

int binom(int k, int n)
{
  return fac(n) / (fac(k) * fac((n - k))); // C^(nk) = n! / (k!(n-k)!)
}

int main() {

  system("chcp 1251>nul");


  int k = 0, n;
  cout << "Введите n:" << endl;
  cin >> n;
  cout << endl;

  while (k < n)
  {
    cout << "Бином C " << k << " от " << n << " равен: " << binom(k, n) << endl;

    k++;
  }

  system("pause>nul");
  return 0;
}