#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Обобщенная структура:
template<class A,class B> struct MyStruct{
   A first;
   B second;
};
// Обобщенная функция для работы с экземплярами
// обобщенной структуры:
template<class A,class B> void show(MyStruct<A,B> str){
   cout<<"Первое поле: "<<str.first<<endl;
   cout<<"Второе поле: "<<str.second<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание экземпляров обобщенной структуры:
   MyStruct<int,char> strA={100,'A'};
   MyStruct<double,string> strB={2.5,"текст"};
   // Вызов обобщенной функции:
   show(strA);
   show(strB);
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

