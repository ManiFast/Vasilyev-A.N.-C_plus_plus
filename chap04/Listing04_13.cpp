#include <iostream>
#include <cstdlib>
using namespace std;
// Функция результатом возвращает
// ссылку на элемент массива:
int &getMax(int* nums,int n){
   int i=0,k;
   // Определение индекса наибольшего элемента:
   for(k=0;k<n;k++){
      if(nums[k]>nums[i]){
         i=k;
      }
   }
   // Результат функции - ссылка на элемент:
   return nums[i];
}
// Функция для отображения содержимого массива:
void show(int* nums,int n){
   for(int i=0;i<n;i++){
      cout<<nums[i]<<" ";
   }
   cout<<endl;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Размер массива:
   const int size=10;
   // Создание массива:
   int numbers[size]={1,5,8,2,4,9,11,9,12,3};
   // Отображение содержимого массива:
   show(numbers,size);
   // Запись результат функции в переменную:
   int maxNum=getMax(numbers,size);
   // Отображение максимального значения:
   cout<<"Максимальное значение: "<<maxNum<<endl;
   // Присваивание значения переменной:
   maxNum=-100;
   // Отображение содержимого массива:
   show(numbers,size);
   // Результат функции записывается в ссылку:
   int &maxRef=getMax(numbers,size);
   // Проверка максимального значения:
   cout<<"Максимальное значение: "<<maxRef<<endl;
   // Присваивание значения ссылке:
   maxRef=-200;
   // Проверка содержимого массива:
   show(numbers,size);
   cout<<"Максимальное значение: ";
   // Вычисление нового наибольшего значения:
   cout<<getMax(numbers,size)<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}