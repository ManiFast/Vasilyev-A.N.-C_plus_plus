#include <iostream>
#include <cstdlib>
using namespace std;
// Базовый класс:
class Alpha{
private:
   // Закрытое поле:
   char symb;
public:
   // Конструктор класса:
   Alpha(char s){
      symb=s;
   }
   // Метод для отображения значения поля:
   void show(){
      cout<<"Класс Alpha: "<<symb<<endl;
   }
   // Метод для присваивания значения полю:
   void set(char s){
      symb=s;
   }
};
// Производный класс:
class Bravo: public Alpha{
public:
   // Открытое поле:
   int num;
   // Конструктор класса:
   Bravo(char s,int n):Alpha(s){
      num=n;
   }
   // В методе вызывается унаследованный метод:
   void showAll(){
      show();
      cout<<"Класс Bravo: "<<num<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Создание объекта производного класса:
   Bravo obj('A',100);
   // Отображение параметров объекта:
   obj.showAll();
   // Вызов унаследованного метода:
   obj.set('Z');
   // Отображение параметров объекта:
   obj.showAll();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}