#include <iostream>
#include <cstdlib>
using namespace std;
// Базовый класс:
class Alpha{
public:
   // Обычный (невиртуальный) метод:
   void show(){
      cout<<"Класс Alpha"<<endl;
   }
   // В методе вызывается метод:
   void showAll(){
      show();
   }
};
// Производный класс:
class Bravo: public Alpha{
public:
   // Переопределение метода:
   void show(){
      cout<<"Класс Bravo"<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Объект производного класса:
   Bravo obj;
   // Вызов методов:
   obj.show();
   obj.showAll();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

