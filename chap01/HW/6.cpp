#include <iostream>

using namespace std;


int main() {

  system("chcp 1251>nul");

  const double KmInMile = 1.609344;

  double distKm;
  cout << "Введите километры:" << endl;
  cin >> distKm;

  cout << endl << "В " << distKm << " км " << distKm / KmInMile << " миль" << endl;


  system("pause>nul");
  return 0;
}