#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Массив символьных указателей:
   char* str[3]={{"красный"},{"желтый"},{"зеленый"}};
   // Отображение строк:
   for(int i=0;i<3;i++){
      cout<<str[i]<<endl;
   }
   // Обращение к элементам массива:
   cout<<str[0][3]<<str[1][1]<<str[0][1];
   cout<<str[2][5]<<str[1][5]<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}
