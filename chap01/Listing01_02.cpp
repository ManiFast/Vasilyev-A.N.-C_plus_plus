#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Константа определяет, сколько в одной
   // миле километров:
   const double kmInMile=1.609344;
   // Переменные для записи расстояния
   // в милях и километрах:
   double distMile,distKm;
   // Запрос на ввод расстояния в милях:
   cout<<"Укажите расстояние в милях: ";
   // Считывание значения для расстояния в милях:
   cin>>distMile;
   // Вычисление расстояния в километрах:
   distKm=distMile*kmInMile;
   // Отображение результата вычислений:
   cout<<"Расстояние (в км): "<<distKm<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}