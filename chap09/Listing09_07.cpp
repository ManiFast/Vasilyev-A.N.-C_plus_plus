#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// Функция для вычисления интегралов методом Монте-Карло:
double integrate(double (*f)(double),double a,double b,double Fmax){
   // Переменные для записи координат точки:
   double x,y;
   // Количество интервалов по каждой из осей:
   int m=10000;
   // Приращение по первой координате:
   double dx=(b-a)/m;
   // Приращение по второй координате:
   double dy=Fmax/m;
   // Переменная для подсчета внутренних точек:
   int count=0;
   // Перебор точек на плоскости:
   for(int i=0;i<=m;i++){
      for(int j=0;j<=m;j++){
         // Первая координата точки:
         x=a+i*dx;
         // Вторая координата точки:
         y=j*dy;
         // Проверка точки:
         if(y<=f(x)){
            // Если точка под графиком функции:
            count++;
         }
      }
   }
   // Доля внутренних точек:
   double z=(double)count/(m+1)/(m+1);
   // Результат функции:
   return Fmax*(b-a)*z;
}
// Подынтегральные функции:
double F1(double x){
   return x*(1-x);
}
double F2(double x){
   double pi=3.141592;
   return pi/2*tan(pi*x/4);
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   cout<<"Вычисление интегралов\n";
   cout<<integrate(F1,0,1,0.25)<<" vs. "<<(double)1/6<<endl;
   cout<<integrate(F2,0,1,1.6)<<" vs. "<<log(2)<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}


