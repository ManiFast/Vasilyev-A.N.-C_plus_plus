#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// ���������� �����:
template<class A=int,class B=char> class MyClass{
public:
   // ����:
   A first;
   B second;
   // �����������:
   MyClass(A f,B s){
      first=f;
      second=s;
   }
   // ����� ��� ����������� �������� �����:
   void show(){
      cout<<"�������� "<<first<<" � "<<second<<endl;
   }
};
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������� ��������:
   MyClass<double,int> objA(3.5,100);
   MyClass<string> objB("�����",'A');
   MyClass<> objC(200,'B');
   // ����� ������:
   objA.show();
   objB.show();
   objC.show();
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

