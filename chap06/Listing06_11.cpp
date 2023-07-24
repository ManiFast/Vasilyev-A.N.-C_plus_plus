#include <iostream>
#include <cstdlib>
using namespace std;
// Первый базовый класс:
class Alpha{
public:
   // Поле:
   char codeA;
   // Конструктор:
   Alpha(char a){
      codeA=a;
   }
   // Виртуальный метод:
   virtual void show(){
      cout<<"Метод из класса Alpha: "<<codeA<<endl;
   }
};
// Второй базовый класс:
class Bravo{
public:
   // Поле:
   char codeB;
   // Конструктор:
   Bravo(char b){
      codeB=b;
   }
   // Виртуальный метод:
   virtual void show(){
      cout<<"Метод из класса Bravo: "<<codeB<<endl;
   }
};
// Производный класс:
class Charlie:public Alpha,public Bravo{
public:
   // Конструктор с пустым телом:
   Charlie(char a,char b):Alpha(a),Bravo(b){}
   // Переопределение метода:
   void show(){
      cout<<"Метод из класса Charlie: ";
      cout<<codeA<<codeB<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   cout<<"Используем переменные\n";
   // Создание объектов:
   Alpha objA('A');
   objA. show();
   Bravo objB('B');
   objB. show();
   Charlie objC('C','D');
   objC. show();
   // Присваивание объектным переменным базовых классов
   // значением объекта производного класса:
   objA=objC;
   objB=objC;
   objA.show();
   objB.show();
   cout<<"Используем указатели\n";
   // Объявление указателей:
   Alpha* pntA=&objC;
   Bravo* pntB=&objC;
   Charlie* pntC=&objC;
   // Метод вызывается через указатели:
   pntA->show();
   pntB->show();
   pntC->show();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}