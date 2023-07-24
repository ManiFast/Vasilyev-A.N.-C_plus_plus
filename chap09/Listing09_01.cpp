#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
// Функция для решения уравнения методом
// последовательных приближений:
double findRoot(double (*f)(double),double x0,int n){
   // Начальное приближение для корня уравнения:
   double x=x0;
   // Последовательные итерации:
   for(int k=1;k<=n;k++){
      x=f(x);
   }
   // Результат функции:
   return x;
}
// Функции для определения правой
// части решаемых  уравнений:
double f(double x){
   return 0.5*cos(x);
}
double g(double x){
   return exp(-x);
}
double h(double x){
   return (x*x+6)/5;
}
// Вспомогательная функция для решения уравнений
// и тестирования найденных решений:
void test(double (*f)(double),double x0,string eq){
   // Количество итераций:
   int n=100;
   // Переменная для записи значения корня уравнения:
   double z;
   cout<<"Решение уравнения "<<eq<<":\t";
   // Решение уравнения:
   z=findRoot(f,x0,n);
   // Отображение результата:
   cout<<z<<endl;
   cout<<"Проверка найденного решения:\t";
   // Проверка решения:
   cout<<z<<" = "<<f(z)<<endl;
   for(int k=1;k<=50;k++){
      cout<<"-";
   }
   cout<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Примеры решения уравнений:
   test(f,0,"x=0.5cos(x)");
   test(g,0,"x=exp(-x)");
   test(h,1,"x=(x*x+6)/5");
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}