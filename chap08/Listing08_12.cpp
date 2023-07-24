#include <iostream>
#include <cstdlib>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;
mutex m;
// Функция для создания потоков:
void mythread(string name,int time,int steps){
   for(int k=1;k<=steps;k++){
      // Временная задержка в выполнении команд:
      this_thread::sleep_for(chrono::seconds(time));
      // Блокировка доступа к ресурсу (консоли):
      m.lock();
      // Отображение сообщения в консоли:
      cout<<"Поток "<<name<<":\tсообщение "<<k<<endl;
      // Разблокировка ресурса (консоли):
      m.unlock();
   }
}
// Главная функция программы:
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Количество циклов в потоках:
   int n=5;
   cout<<"Запускаются потоки...\n";
   // Первый дочерний поток:
   thread A(mythread,"Alpha",4,n);
   // Второй дочерний поток:
   thread B(mythread,"Bravo",3,n);
   // Вызов функции в главном потоке:
   mythread("Main",2,n);
   // Ожидание завершения первого дочернего потока:
   if(A.joinable()){
      A.join();
   }
   // Ожидание завершения второго дочернего потока:
   if(B.joinable()){
      B.join();
   }
   cout<<"Выполнение программы завершено...\n";
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

