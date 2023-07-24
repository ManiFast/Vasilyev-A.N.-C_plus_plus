#include <iostream>
#include <cstdlib>
using namespace std;
class Alpha{
public:
   // Виртуальный метод:
   virtual void show(){
      cout<<"Класс Alpha"<<endl;
   }
   void showAll(){
      show();
   }
};
class Bravo: public Alpha{
public:
   void show(){
      cout<<"Класс Bravo"<<endl;
   }
};
int main(){
   system("chcp 1251>nul");
   Bravo obj;
   obj.show();
   obj.showAll();
   system("pause>nul");
   return 0;
}