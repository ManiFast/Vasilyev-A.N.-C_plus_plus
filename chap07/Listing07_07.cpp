#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// Обобщенный класс:
template<class T> class MyClass{
private:
   // Закрытое поле:
   T value;
public:
   // Конструктор:
   MyClass(T v){
      value=v;
   }
   // Метод для отображения значения поля:
   void show(){
      cout<<"Значение поля: "<<value<<endl;
   }
};
// Явная специализация класса:
template<> class MyClass<string>{
private:
   // Закрытое поле - массив:
   char value[100];
public:
   // Конструктор:
   MyClass(char* str){
      int k;
      // Первый символ в поле - массиве:
      value[0]='|';
      // Заполнение поля - массива:
      for(k=0;str[k];k++){
         value[2*k+1]=str[k];
         value[2*k+2]='|';
      }
      // Добавление нуль-символа в конец массива:
      value[2*k+1]='\0';
   }
   void show(){
      cout<<value<<endl;
   }
};
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   MyClass<int> objA(100);
   // Создание объектов на основе обобщенного класса:
   MyClass<char> objB('A');
   MyClass<char*> objC("текст");
   MyClass<string> objD("текст");
   // Вызов метода из объекта, созданного на
   // основе обобщенного класса:
   objA.show();
   objB.show();
   objC.show();
   objD.show();
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

