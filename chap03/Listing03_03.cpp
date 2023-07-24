#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // целочисленная переменная:
   int num;
   // Ссылка на переменную:
   int &ref=num;
   // Присваивание значения переменной:
   num=100;
   // Проверка значения переменной и ссылки:
   cout<<"num = "<<num<<endl;
   cout<<"ref = "<<ref<<endl;
   // Присваивание значения ссылке:
   ref=200;
   // Проверка значения переменной и ссылки:
   cout<<"num = "<<num<<endl;
   cout<<"ref = "<<ref<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}
