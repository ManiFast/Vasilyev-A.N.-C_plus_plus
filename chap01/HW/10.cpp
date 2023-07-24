#include <iostream>

using namespace std;

int respeed(double speed)
{
  return speed / 3.6;
}

int main() {

  system("chcp 1251>nul");

  double speed;
  cout << "Введите скорость в км/ч: ";
  cin >> speed;

  cout << endl << respeed(speed) << " м/с" << endl;

  system("pause>nul");
  return 0;
}