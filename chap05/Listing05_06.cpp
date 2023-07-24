#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Описание базового класса:
class MyMoney{
public:
   // Поля базового класса:
   string name;
   double money;
   double rate;
   int time;
   // Методы базового класса:
   double getMoney(){
      double s=money;
         for(int k=1;k<=time;k++){
            s*=(1+rate/100);
         }
      return s;
   }
   void showAll(){
      cout<<"Имя: "<<name<<endl;
      cout<<"Вклад: "<<money<<endl;
      cout<<"Ставка (%): "<<rate<<endl;
      cout<<"Период (лет): "<<time<<endl;
      cout<<"Итоговая сумма: "<<getMoney()<<endl;
   }
   void setAll(string n,double m,double r,int t){
      name=n;
      money=m;
      rate=r;
      time=t;
   }
   // Конструктор базового класса (четыре аргумента):
   MyMoney(string n,double m,double r,int t){
      setAll(n,m,r,t);
   }
   // Конструктор базового класса (без аргументов):
   MyMoney(){
      setAll("",0,0,0);
   }
};
// Производный класс:
class BigMoney: public MyMoney{
public:
   // Поля производного класса:
   int periods;
   // Переопределение методов:
   double getMoney(){
      double s=money;
         for(int k=1;k<=time*periods;k++){
            s*=(1+rate/100/periods);
         }
      return s;
   }
   void showAll(){
      cout<<"Имя: "<<name<<endl;
      cout<<"Вклад: "<<money<<endl;
      cout<<"Ставка (%): "<<rate<<endl;
      cout<<"Период (лет): "<<time<<endl;
      cout<<"Начислений в год: "<<periods<<endl;
      cout<<"Итоговая сумма: "<<getMoney()<<endl;
   }
   void setAll(string n,double m,double r,int t,int p){
      MyMoney::setAll(n,m,r,t);
      periods=p;
   }
   // Конструктор производного класса (пять аргументов):
   BigMoney(string n,double m,double r,int t,int p=1): MyMoney(n,m,r,t){
      periods=p;
   }
   // Конструктор производного класса (без аргументов):
   BigMoney(): MyMoney(){
      periods=1;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объекта класса MyMoney:
   MyMoney objA("Кот Матроскин",1200,8,5);
   // Создание объектов класса BigMoney:
   BigMoney objB("Дядя Федор",1000,7,6,2);
   BigMoney objC("Пес Шарик",1500,6,8);
   BigMoney objD;
   objD.setAll("Почтальон Печкин",800,10,3,4);
   // Проверка характеристик объектов:
   objA.showAll();
   cout<<endl;
   objB.showAll();
   cout<<endl;
   objC.showAll();
   cout<<endl;
   objD.showAll();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}