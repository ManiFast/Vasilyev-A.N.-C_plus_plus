#include <iostream>
#include <cstdlib>
using namespace std;
class Alpha{
public:
   // ����������� �����:
   virtual void show(){
      cout<<"����� Alpha"<<endl;
   }
   void showAll(){
      show();
   }
};
class Bravo: public Alpha{
public:
   void show(){
      cout<<"����� Bravo"<<endl;
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