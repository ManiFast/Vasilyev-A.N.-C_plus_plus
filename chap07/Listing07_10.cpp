#include <iostream>
#include <cstdlib>
using namespace std;
// ������� ���������� �����:
template<class X> class BaseClass{
private:
   // �������� ����:
   X value;
public:
   // �����������:
   BaseClass(X val){
      set(val);
   }
   // ����� ��� ������������ �������� ����:
   void set(X val){
      value=val;
   }
   // ����� ��� ��������� �������� ����:
   X get(){
      return value;
   }
};
// ������ ����������� �����:
class Alpha: public BaseClass<int>{
public:
   // �����������:
   Alpha():BaseClass<int>(0){}
};
// ������ ����������� �����:
class Bravo: public BaseClass<char>{
public:
   // �����������:
   Bravo(char s):BaseClass<char>(s){}
};
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������ ������� ������������ ������:
   Alpha objA;
   // ���������� �������� � ��������:
   cout<<"������ objA: "<<objA.get()<<endl;
   objA.set(100);
   cout<<"������ objA: "<<objA.get()<<endl;
   // ������ ������� ������������ ������:
   Bravo objB('A');
   // ���������� �������� � ��������:
   cout<<"������ objB: "<<objB.get()<<endl;
   objB.set('B');
   cout<<"������ objB: "<<objB.get()<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

