#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Инициализация генератора случайных чисел:
   srand(2);
   // Создание массива:
   int nums[12];
   cout<<"Массив случайных чисел:\n";
   // Цикл по коллекции:
   for(int &x: nums){
      x=rand()%10;   // Случайное число от 0 до 9
      cout<<x<<" ";  // Отображение значения элемента
   }
   cout<<endl;
   // Переменная для записи размера массива:
   int length=0;
   // Цикл по коллекции:
   for(int &x: nums){
      length++;
   }
   cout<<"Размер массива: "<<length<<endl;
   cout<<"Проверка содержимого массива:\n";
   // Обычный оператор цикла:
   for(int k=0;k<length;k++){
      cout<<nums[k]<<" ";
   }
   cout<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

