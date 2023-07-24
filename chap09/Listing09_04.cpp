#include <iostream>
#include <cstdlib>
using namespace std;
// Вспомогательная функция:
double phi(int k,double z,double* x,int n){
   // Индексная переменная:
   int i;
   // Переменная для записи результата:
   double res=1;
   // Вычисление произведения:
   for(i=0;i<k;i++){
      res*=(z-x[i])/(x[k]-x[i]);
   }
   for(i=k+1;i<n;i++){
      res*=(z-x[i])/(x[k]-x[i]);
   }
   // Результат функции:
   return res;
}
// Полином Лагранжа:
double L(double z,double* x,double* y,int n){
   // Переменная для записи результата:
   double s=0;
   // Вычисление полиномиальной суммы:
   for(int k=0;k<n;k++){
      s+=y[k]*phi(k,z,x,n);
   }
   // Результат функции:
   return s;
}
// Функция для отображения "линии":
void line(int m){
   for(int k=1;k<=m;k++){
      cout<<"-";
   }
   cout<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Индексная переменная и длина "линии":
   int k,m=20;
   // Размер массивов:
   const int n=5;
   // Узловые точки:
   double x[n]={1,3,5,7,9};
   // Значения функции в узловых точках:
   double y[n]={0,2,-1,1,3};
   line(m);
   cout<<"x\t| L(x)\n";
   line(m);
   // Отображение узловых точек и значений
   // интерполяционного полинома в этих точках:
   for(k=0;k<n;k++){
      cout<<x[k]<<"\t| "<<L(x[k],x,y,n)<<endl;
   }
   // Сдвиг для аргумента:
   double dx=1;
   line(m);
   cout<<"x\t| L(x)\n";
   line(m);
   // Значения аргумента и значения полинома:
   for(k=0;k<n;k++){
      cout<<x[k]+dx<<"\t| "<<L(x[k]+dx,x,y,n)<<endl;
   }
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}