#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Описание класса:
class MyMoney{
public:
   // Поля:
   string name;
   double money;
   double rate;
   int time;
   // Методы:
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
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объекта:
   MyMoney obj;
   // Присваивание значений полям:
   obj.name="Иванов Иван Иванович";
   obj.money=1000;
   obj.rate=8;
   obj.time=5;
   // Вызов метода:
   obj.showAll();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}