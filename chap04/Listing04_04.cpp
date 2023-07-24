#include <iostream>
#include <cstdlib>
using namespace std;
// В функции используется рекурсивный вызов:
double getMoney(double m,double r,int y){
   if(y==0){
      return m;
   }
   else{
      return (1+r/100)*getMoney(m,r,y-1);
   }
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
   cout<<"Вклад на 1 год: "<<getMoney(money,rate,1)<<endl;
   cout<<"Вклад на 7 лет: "<<getMoney(money,rate,7)<<endl;
   cout<<"Вклад на 10 лет: "<<getMoney(money,rate,10)<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}