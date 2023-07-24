#include <iostream>
#include <cstdlib>
using namespace std;
// В функцию передается массив для заполнения
// числами Фибоначчи:
void fibs(int* nums,int n){
   for(int i=0;i<n;i++){
      if(i==0||i==1){
         nums[i]=1;
      }
      else{
         nums[i]=nums[i-1]+nums[i-2];
      }
   }
}
// В функцию передается массив для заполнения
// случайными числами:
void myrand(int* nums,int m){
   for(int i=0;i<m;i++){
      nums[i]=rand()%10;
   }
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Инициализация генератора случайных чисел:
   srand(2);
   // Размер массива:
   const int n=15;
   // Массив:
   int f[n];
   // Заполнение массива числами Фибоначчи:
   fibs(f,n);
   // Отображение значений элементов массива:
   for(int i=0;i<n;i++){
      cout<<f[i]<<" ";
   }
   cout<<endl;
   // Заполнение массива случайными числами:
   myrand(f,n);
   // Отображение содержимого массива:
   for(int i=0;i<n;i++){
      cout<<f[i]<<" ";
   }
   cout<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}