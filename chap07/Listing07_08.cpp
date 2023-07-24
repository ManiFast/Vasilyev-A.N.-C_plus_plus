#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Обобщенный класс:
template<class A=int,class B=char> class MyClass{
public:
   // Поля:
   A first;
   B second;
   // Конструктор:
   MyClass(A f,B s){
      first=f;
      second=s;
   }
   // Метод для отображения значения полей:
   void show(){
      cout<<"Значения "<<first<<" и "<<second<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объектов:
   MyClass<double,int> objA(3.5,100);
   MyClass<string> objB("текст",'A');
   MyClass<> objC(200,'B');
   // Вызов метода:
   objA.show();
   objB.show();
   objC.show();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

