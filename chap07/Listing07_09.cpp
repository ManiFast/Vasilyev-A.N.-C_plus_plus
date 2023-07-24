#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Первый базовый обобщенный класс:
template<class A> class Alpha{
public:
   // Поле:
   A alpha;
   // Конструктор:
   Alpha(A a){
      alpha=a;
   }
   // Метод:
   void show(){
      cout<<"Поле alpha: "<<alpha<<endl;
   }
};
// Второй базовый обобщенный класс:
template<class B> class Bravo{
public:
   // Поле:
   B bravo;
   // Конструктор:
   Bravo(B b){
      bravo=b;
   }
   // Метод:
   void show(){
      cout<<"Поле bravo: "<<bravo<<endl;
   }
};
// Производный обобщенный класс:
template<class A,class B,class C> class Charlie: public Alpha<A>,public Bravo<B>{
public:
   // Поле:
   C charlie;
   // Конструктор:
   Charlie(A a,B b,C c):Alpha<A>(a),Bravo<B>(b){
      charlie=c;
   }
   // Переопределение метода:
   void show(){
      // Вызов версии метода из первого базового класса:
      Alpha<A>::show();
      // Вызов метода из второго базового класса:
      Bravo<B>::show();
      cout<<"Поле charlie: "<<charlie<<endl;
   }
};
// Главная функция программа:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объектов:
   Charlie<string,char,int> objA("текст",'A',100);
   Charlie<int,double,char> objB(200,5.5,'B');
   // Вызов метода из объектов:
   objA.show();
   objB.show();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

