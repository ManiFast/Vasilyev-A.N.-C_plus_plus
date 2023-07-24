#include <iostream>
#include <cstdlib>
using namespace std;
// Обобщенная функция с двумя параметрами:
template<class X,class R> R apply(R (*fun)(X),X arg){
   return fun(arg);
}
// Обычная функция (аргумент типа double
// и результат типа double):
double f(double x){
   return x*(1-x);
}
// Обычная функция (аргумент типа int
// и результат типа int):
int factorial(int n){
   if(n==0){
      return 1;
   }
   else{
      return n*factorial(n-1);
   }
}
// Обычная функция (аргумент типа int
// и результат типа char):
char symb(int n){
   return 'A'+n;
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Вызов обобщенной функции:
   cout<<apply(f,0.5)<<endl;
   cout<<apply(factorial,5)<<endl;
   cout<<apply(symb,3)<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

