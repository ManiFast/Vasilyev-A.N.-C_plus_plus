#include <iostream>
#include <cstdlib>
using namespace std;
// Версия обобщенной функции с одним аргументом:
template<class X> void show(X x){
   cout<<"Функция с одним аргументом\n";
   cout<<"Значение аргумента: "<<x<<endl;
}
// Версия обобщенной функции с двумя аргументами:
template<class X,class Y> void show(X x,Y y){
   cout<<"Функция с двумя аргументами\n";
   cout<<"Первый аргумент: "<<x<<endl;
   cout<<"Второй аргумент: "<<y<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Вызов обобщенной функции с одним аргументом:
   show('A');
   show(123);
   show("Текст");
   // Вызов обобщенной функции с двумя аргументами:
   show(321,"Текст");
   show('B',456);
   show('C','D');
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}


