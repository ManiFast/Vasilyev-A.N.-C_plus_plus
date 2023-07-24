#include <iostream>

using namespace std;


int main() {

  system("chcp 1251>nul");

  double saj, arsh;
  cout << "Введите расстояние:" << endl;
  cout << "В саженях: ";
  cin >> saj;
  cout << "В аршинах: ";
  cin >> arsh;

  const double mInSaj = 2.16;
  const double arshInSaj = 3;


  double sajAll;
  sajAll = saj + arsh / 3;

  
  double distM, distCm;
  distM = (int)(sajAll * 2.16);
  distCm = (sajAll * 2.16) - distM;



  cout << endl << "Метры: " << distM << endl;
  cout << "Сантиметры: " << distCm << endl;


  system("pause>nul");
  return 0;
}