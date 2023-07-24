#include <iostream>
#include <cstdlib>
using namespace std;
// Обобщенная функция:
template<class X> void show(X arg){
   cout<<arg<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Вызов обобщенной функции с символьным аргументом:
   show('A');
   // Вызов обобщенной функции с числовым аргументом:
   show(123);
   // Вызов обобщенной функции с текстовым аргументом:
   show("Текст");
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

