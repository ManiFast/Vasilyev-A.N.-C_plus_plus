#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// Функция, определяющая решаемое уравнение:
double f(double x){
   return 2*exp(-x)-1;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Количество итераций:
   int n=10;
   // Приращение аргумента для вычисления производной:
   double dx=0.00001;
   // Начальное приближение для корня уравнения:
   double x=0;
   // Вычисление корня уравнения:
   for(int k=1;k<=n;k++){
      x=x-f(x)/((f(x+dx)-f(x))/dx);
   }
   // Отображение результата:
   cout<<"Найдено такое решение:\t"<<x<<endl;
   cout<<"Контрольное значение:\t"<<log(2)<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

