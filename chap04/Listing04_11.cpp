#include <iostream>
#include <cstdlib>
using namespace std;
// Функция для определения длины строки:
int getLength(char* str){
   int s=0;
   for(int i=0;str[i];i++){
      s++;
   }
   return s;
}
// Функция для определения количества пробелов в строке:
int getSpace(char* str){
   int s=0;
   for(int i=0;str[i];i++){
      if(str[i]==' '){
         s++;
      }
   }
   return s;
}
// Функция для отображения строки и некоторых
// дополнительных характеристик:
void show(char* str){
   cout<<"Фраза: "<<str<<endl;
   cout<<"Символов: "<<getLength(str)<<endl;
   cout<<"Пробелов: "<<getSpace(str)<<endl;
   for(int k=1;k<=35;k++){
      cout<<"-";
   }
   cout<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Символьный массив:
   char txt[100]="Изучаем язык программирования С++";
   // Передача аргументом функции символьного массива:
   show(txt);
   // Передача аргументом функции текстового литерала:
   show("В С++ есть классы и объекты");
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

