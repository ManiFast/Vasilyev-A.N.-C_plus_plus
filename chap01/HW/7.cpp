#include <iostream>

using namespace std;


int main() {

  system("chcp 1251>nul");

  const double KmInMile = 1.609344;

  // Km m => Mile Ft

  double distKm, distM, distMile, distFt;

  cout << "Введите расстояние Км и м:" << endl;
  cout << "Километры: ";
  cin >> distKm;
  cout << "Метры: ";
  cin >> distM;

  double dKm, dMile;
  dKm = distKm + distM / 1000;

  distMile = (int)(dKm / KmInMile);
  distFt = (dKm / KmInMile - distMile) * 5280;

  cout << endl << "Мили: " << distMile << endl;
  cout << "Футы: " << distFt << endl;

  system("pause>nul");
  return 0;
}