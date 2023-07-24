#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Описание класса:
class MyClass{
public:
   // Текстовое поле:
   string name;
   // Целочисленное поле:
   int number;
   // Метод для отображения значения полей:
   void show(){
      cout<<"Поле name: "<<name<<endl;
      cout<<"Поле number: "<<number<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объектов:
   MyClass objA,objB;
   // Объявление указателя на объект:
   MyClass* p;
   // Адрес объекта записывается в указатель:
   p=&objA;
   // Присваивание значений полям объекта
   // через указатель:
   p->name="Объект objA";
   p->number=111;
   // Вызов метода через указатель:
   p->show();
   // Новое значение указателя:
   p=&objB;
   // Присваивание значений полям объекта
   // через указатель:
   p->name="Объект objB";
   p->number=222;
   // Вызов метода через указатель:
   p->show();
   cout<<"Проверяем объекты\n";
   // Проверка значений полей объектов:
   objA.show();
   objB.show();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}