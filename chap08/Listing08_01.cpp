#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Описание структуры:
struct MyMoney{
   // Поля структуры:
   string name;
   double money;
   double rate;
   int time;
};
// Функция для вычисления (на основе экземпляра
// структуры) итоговой суммы:
double getMoney(MyMoney str){
   double s=str.money;
   for(int k=1;k<=str.time;k++){
      s*=(1+str.rate/100);
   }
   return s;
}
// Функция для отображения полной информации
// для экземпляра структуры:
void show(MyMoney str){
   cout<<"Имя вкладчика: "<<str.name<<endl;
   cout<<"Начальная сумма: "<<str.money<<endl;
   cout<<"Процентная ставка: "<<str.rate<<endl;
   cout<<"Время (лет): "<<str.time<<endl;
   cout<<"Итоговая сумма: "<<getMoney(str)<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Первый экземпляр структуры:
   MyMoney cat={"Кот Матроскин",1000,8,5};
   // Второй экземпляр структуры:
   MyMoney dog={"Пес Шарик",1200,7,4};
   // Отображение информации:
   show(cat);
   show(dog);
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

