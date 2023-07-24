#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   cout<<"Решение уравнения Ax = B\n";
   // Параметры уравнения:
   double A,B;
   // Считывание значений для параметров уравнения:
   cout<<"A = ";
   cin>>A;
   cout<<"B = ";
   cin>>B;
   // Контролируемый блок кода:
   try{
      if(A!=0){
         // Генерирование исключения:
         throw A;
      }
      if(B!=0){
          // Генерирование исключения:
          throw "Решений нет";
      }
      cout<<"Решение - любое число"<<endl;
   }
   // Обработка числового исключения:
   catch(double e){
      cout<<"Решение уравнения: "<<B/e<<endl;
   }
   // Обработка текстового исключения:
   catch(char* e){
      cout<<e<<endl;
   }
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

