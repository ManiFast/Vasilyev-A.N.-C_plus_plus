#include <iostream>
#include <cstdlib>
using namespace std;
// �������� ������:
class MyClass{
public:
   int number;
   MyClass(int n){
      number=n;
   }
   void show(){
      cout<<"������ ������ MyClass: "<<number<<endl;
   }
};
// ���������� �������:
template<class X> void show(X arg){
   cout<<"�������� ��������� �������: "<<arg<<endl;
}
// ����� ������������� ���������� �������:
template<> void show<int>(int arg){
   cout<<"������������� ��������: "<<arg<<endl;
}
template<> void show<MyClass>(MyClass obj){
   obj.show();
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   MyClass obj(300);
   // ����� ���������� �������:
   show('A');
   show(100.0);
   show(200);
   show(obj);
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}
