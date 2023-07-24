#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Инициализация генератора случайных чисел:
   srand(2);
   // Количество элементов:
   int n;
   cout<<"Количество символов: ";
   // Считывание значения для переменной:
   cin>>n;
   // Создание пустого контейнерного объекта:
   vector<char> symbs;
   cout<<"|";
   // Добавление элементов в контейнерный объект:
   while(symbs.size()<n){
      // В конец массива добавляется новый элемент:
      symbs.push_back('A'+rand()%(n+5));
      // Отображение значения
      // последнего элемента в массиве:
      cout<<" "<<symbs[symbs.size()-1]<<" |";
   }
   cout<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}