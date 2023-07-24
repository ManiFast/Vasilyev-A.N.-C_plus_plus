#include <iostream>
#include <cstdlib>
using namespace std;
// Описание класса:
class MyClass{
public:
   int number;
   MyClass(int n){
      number=n;
   }
   void show(){
      cout<<"Объект класса MyClass: "<<number<<endl;
   }
};
// Обобщенная функция:
template<class X> void show(X arg){
   cout<<"Значение аргумента функции: "<<arg<<endl;
}
// Явная специализация обобщенной функции:
template<> void show<int>(int arg){
   cout<<"Целочисленный аргумент: "<<arg<<endl;
}
template<> void show<MyClass>(MyClass obj){
   obj.show();
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   MyClass obj(300);
   // Вызов обобщенной функции:
   show('A');
   show(100.0);
   show(200);
   show(obj);
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}
