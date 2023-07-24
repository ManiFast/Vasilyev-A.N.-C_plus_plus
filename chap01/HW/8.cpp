#include <iostream>

using namespace std;


int main() {

  system("chcp 1251>nul");

  double saj;
  cout << "Введите расстояние в саженях: ";
  cin >> saj;

  cout << endl << "Метры: " << saj * 2.16 << endl;

  system("pause>nul");
  return 0;
}