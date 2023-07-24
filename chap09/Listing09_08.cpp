#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// Функция, определяющая дифференциальное уравнение:
double f(double x,double y){
   return x*x*exp(-x)-y;
}
// Функция для решения дифференциального
// уравнения методом Эйлера:
double dsolve(double (*f)(double,double),double x0,double y0,double x){
   // Количество интервалов:
   int n=1000;
   // Приращение по аргументу:
   double h=(x-x0)/n;
   // Начальное значение искомой функции:
   double y=y0;
   // Вычисление значения функции в точке:
   for(int k=0;k<n;k++){
      y=y+h*f(x0+k*h,y);
   }
   // Значение искомой функции в точке:
   return y;
}
// Функция, определяющая точное решение
// дифференциального уравнения:
double Y(double x){
   return (x*x*x/3+1)*exp(-x);
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Массив значений аргумента, для которых
   // вычисляется решение дифференциального уравнения:
   double x[]={0,0.5,1,3,10};
   cout<<"Решение дифференциального уравнения:\n";
   for(int k=0;k<5;k++){
      cout<<dsolve(f,0,1,x[k])<<" vs. "<<Y(x[k])<<endl;
   }
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}