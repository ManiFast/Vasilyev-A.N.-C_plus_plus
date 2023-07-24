#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Инициализация генератора случайных чисел:
   srand(2);
   // Количество символов:
   int n;
   cout<<"Количество символов: ";
   // Считывание значения:
   cin>>n;
   // Объект с символьным массивом:
   vector<char> symbs(n,'A');
   // Итератор:
   vector<char>::iterator p;
   cout<<"|";
   // Вычисление значений элементов массива
   // и отображение этих значений в консоли:
   for(p=symbs.begin();p!=symbs.end();p++){
      // Вычисление значения элемента
      // (доступ через итератор):
      *p+=rand()%(n+5);
      // Отображение значения элемента:
      cout<<" "<<*p<<" |";
   }
   cout<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}