#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Описание класса:
class MyMoney{
private:   // Закрытые члены класса
   string name;
   double money;
   double rate;
   int time;
   double getMoney(){
      double s=money;
         for(int k=1;k<=time;k++){
            s*=(1+rate/100);
         }
      return s;
   }
public:   // Открытые члены класса
   void showAll(){
      cout<<"Имя: "<<name<<endl;
      cout<<"Вклад: "<<money<<endl;
      cout<<"Ставка (%): "<<rate<<endl;
      cout<<"Период (лет): "<<time<<endl;
      cout<<"Итоговая сумма: "<<getMoney()<<endl;
   }
   // Версия с четырьмя аргументами:
   void setAll(string n,double m,double r,int t){
      name=n;
      money=m;
      rate=r;
      time=t;
   }
   // Версия с тремя аргументами:
   void setAll(double m,double r,int t){
      money=m;
      rate=r;
      time=t;
   }
   // Версия с текстовым аргументом:
   void setAll(string n){
      name=n;
   }
   // Версия с целочисленным аргументом:
   void setAll(int t){
      time=t;
   }
   // Версия с двумя аргументами типа double:
   void setAll(double m,double r){
      money=m;
      rate=r;
   }
   // Версия с двумя аргументами (типа double и типа bool):
   void setAll(double x,bool s=true){
      if(s){
         money=x;
      }
      else{
         rate=x;
      }
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объекта:
   MyMoney obj;
   // Присваивание значений полям:
   obj.setAll("Иванов Иван Иванович",1000,8,5);
   obj.showAll();
   cout<<endl;
   // Изменение имени:
   obj.setAll("Петров Петр Петрович");
   obj.showAll();
   cout<<endl;
   // Изменение времени вклада:
   obj.setAll(10);
   obj.showAll();
   cout<<endl;
   // Изменение начальной суммы:
   obj.setAll(1200.0);
   obj.showAll();
   cout<<endl;
   // Изменение начальной суммы:
   obj.setAll(1500,true);
   obj.showAll();
   cout<<endl;
   // Изменение процентной ставки:
   obj.setAll(6,false);
   obj.showAll();
   cout<<endl;
   // Изменение начальной суммы, процентной ставки и
   // времени размещения депозита:
   obj.setAll(1000,8,5);
   obj.showAll();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}