#include <iostream>
#include <cstdlib>
using namespace std;
// Базовый обобщенный класс:
template<class X> class BaseClass{
private:
   // Закрытое поле:
   X value;
public:
   // Конструктор:
   BaseClass(X val){
      set(val);
   }
   // Метод для присваивания значения полю:
   void set(X val){
      value=val;
   }
   // Метод для получения значения поля:
   X get(){
      return value;
   }
};
// Первый производный класс:
class Alpha: public BaseClass<int>{
public:
   // Конструктор:
   Alpha():BaseClass<int>(0){}
};
// Второй производный класс:
class Bravo: public BaseClass<char>{
public:
   // Конструктор:
   Bravo(char s):BaseClass<char>(s){}
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Объект первого производного класса:
   Alpha objA;
   // Выполнение операций с объектом:
   cout<<"Объект objA: "<<objA.get()<<endl;
   objA.set(100);
   cout<<"Объект objA: "<<objA.get()<<endl;
   // Объект второго производного класса:
   Bravo objB('A');
   // Выполнение операций с объектом:
   cout<<"Объект objB: "<<objB.get()<<endl;
   objB.set('B');
   cout<<"Объект objB: "<<objB.get()<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

