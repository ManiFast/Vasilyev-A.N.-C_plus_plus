#include <iostream>
#include <cstdlib>
#include <valarray>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Переменная для записи размера массива:
   int n;
   cout<<"Введите размер массива: ";
   // Считывание размера массива:
   cin>>n;
   // Создание числового массива:
   valarray<int> fibs(n);
   // Значения первых двух элементов:
   fibs[0]=1;
   fibs[1]=1;
   cout<<fibs[0]<<" "<<fibs[1];
   // Заполнение массива и отображение значений элементов:
   for(int k=2;k<n;k++){
      fibs[k]=fibs[k-1]+fibs[k-2];
      cout<<" "<<fibs[k];
   }
   cout<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

