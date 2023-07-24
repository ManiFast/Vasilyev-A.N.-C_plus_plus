#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Указатель на целое число:
   int* size;
   // Динамическое выделение памяти под переменную:
   size=new int;
   cout<<"Введите размер массива: ";
   // Считывание значения с клавиатуры:
   cin>>*size;
   // Указатель на символьное значение:
   char* symbs;
   // Создание символьного массива:
   symbs=new char[*size];
   // Заполнение массива:
   for(int k=0;k<*size;k++){
      symbs[k]='a'+k;
      cout<<symbs[k]<<" ";
   }
   // Удаление массива:
   delete [] symbs;
   // Удаление переменной:
   delete size;
   cout<<"\nМассив и переменная удалены\n";
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

