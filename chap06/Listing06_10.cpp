#include <iostream>
#include <cstdlib>
using namespace std;
// Первый базовый класс:
class Alpha{
public:
   // Поле:
   int alpha;
   // Конструктор:
   Alpha(int a){
      alpha=a;
   }
   // Метод:
   void show(){
      cout<<"Класс Alpha: "<<alpha<<endl;
   }
};
// Второй базовый класс:
class Bravo{
public:
   // Поле:
   int bravo;
   // Конструктор:
   Bravo(int b){
      bravo=b;
   }
   // Метод:
   void show(){
      cout<<"Класс Bravo: "<<bravo<<endl;
   }
};
// Производный класс:
class Charlie:public Alpha,public Bravo{
public:
   // Поле:
   int charlie;
   // Конструктор:
   Charlie(int a,int b,int c):Alpha(a),Bravo(b){
      charlie=c;
   }
   // Переопределение метода:
   void show(){
      // Вызов версии метода из класса Alpha:
      Alpha::show();
      // Вызов версии метода из класса Bravo:
      Bravo::show();
      // Отображение значения поля:
      cout<<"Класс Charlie: "<<charlie<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объекта производного класса:
   Charlie obj(10,20,30);
   // Вызов метода:
   obj.show();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

