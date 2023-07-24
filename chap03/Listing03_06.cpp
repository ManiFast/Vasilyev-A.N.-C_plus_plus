#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Инициализация генератора случайных чисел:
   srand(2);
   // Количество "столбцов" в массиве:
   const int width=9;
   // Количество "строк" в массиве:
   const int height=5;
   // Создание двумерного массива:
   char Lts[height][width];
   // Заполнение двумерного массива:
   for(int i=0;i<height;i++){
      for(int j=0;j<width;j++){
         // Случайная буква от 'A' до 'Z':
         Lts[i][j]='A'+rand()%25;
         // Отображение значения элемента массива:
         cout<<Lts[i][j]<<" ";
      }
      // Переход к новой строке:
      cout<<endl;
   }
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

