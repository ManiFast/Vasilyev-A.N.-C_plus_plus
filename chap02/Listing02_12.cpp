#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Целочисленные переменные:
   int n=10,s=0,k=1;
   start: // Метка
   s+=k*k;
   if(k<n){
      k++;
      // Переход к месту, обозначенному меткой:
      goto start;
   }
   // Отображение результата вычислений:
   cout<<"Сумма квадратов чисел от 1 до "<<n<<": "<<s<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}
