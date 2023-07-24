#include <iostream>
#include <cstdlib>
using namespace std;
// Функция с двумя аргументами:
double getMoney(double m,double r){
   return m*(1+r/100);
}
// Функция с тремя аргументами:
double getMoney(double m,double r,int y){
   double s=m;
   for(int k=1;k<=y;k++){
      s*=(1+r/100);
   }
   return s;
}
// Функция с четырьмя аргументами:
double getMoney(double m,double r,int y,int n){
   return getMoney(m,r/n,y*n);
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Начальная сумма вклада:
   double money=1000;
   // Процентная ставка:
   double rate=5;
   cout<<"Начальная сумма: "<<money<<endl;
   cout<<"Годовая ставка: "<<rate<<"%\n";
   // Вычисление дохода за разные промежутки времени:
   cout<<"Вклад на один год: "<<getMoney(money,rate)<<endl;
   cout<<"Вклад на 7 лет: "<<getMoney(money,rate,7)<<endl;
   cout<<"Вклад на 7 лет\n(начисления 3 раза в год): ";
   cout<<getMoney(money,rate,7,3)<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

