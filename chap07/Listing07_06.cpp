#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Обобщенный класс:
template<class A,class B> class MyClass{
public:
   // Поля класса:
   A first;
   B second;
   // Конструктор класса:
   MyClass(A f,B s){
      first=f;
      second=s;
   }
   // Метод для отображения значения полей:
   void show(){
      cout<<"Первое поле: "<<first<<endl;
      cout<<"Второе поле: "<<second<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объектов на основе обобщенного класса:
   MyClass<int,char> objA(100,'A');
   MyClass<string,double> objB("текст",10.5);
   MyClass<char*,string> objC("первый","второй");
   MyClass<int,int> objD(1,2);
   // Проверка значений полей объектов:
   objA.show();
   objB.show();
   objC.show();
   objD.show();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}