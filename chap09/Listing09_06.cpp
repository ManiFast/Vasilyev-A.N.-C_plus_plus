#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// Функция для вычисления интегралов методом Симпсона:
double integrate(double (*f)(double),double a,double b,int m=1000){
   // Длина внутреннего интервала:
   double h=(b-a)/2/m;
   // Переменная для записи интегральной суммы:
   double s=0;
   // Вычисление интегральной суммы:
   for(int k=1;k<=m-1;k++){
      s+=4*f(a+(2*k-1)*h)+2*f(a+2*k*h);
   }
   s+=f(a)+f(b)+4*f(a+(2*m-1)*h);
   s*=h/3;
   // Результат функции:
   return s;
}
// Подынтегральные функции:
double F1(double x){
   return x*(1-x);
}
double F2(double x){
   double pi=3.141592;
   return pi/2*tan(pi*x/4);
}
double F3(double x){
   return exp(-x)*cos(x);
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   cout<<"Вычисление интегралов\n";
   cout<<integrate(F1,0,1)<<" vs. "<<(double)1/6<<endl;
   cout<<integrate(F2,0,1)<<" vs. "<<log(2)<<endl;
   cout<<integrate(F3,0,100,1e5)<<" vs. "<<0.5<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

