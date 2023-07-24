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
   // Считывание значения переменной:
   cin>>n;
   // Объект с символьным массивом:
   vector<char> symbs(n);
   cout<<"|";
   // Вычисление значений элементов и их
   // отображение в консольном окне:
   for(int k=0;k<symbs.size();k++){
      // генерирование случайного символа:
      symbs[k]='A'+rand()%(n+5);
      // Отображение значения элемента:
      cout<<" "<<symbs[k]<<" |";
   }
   cout<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

