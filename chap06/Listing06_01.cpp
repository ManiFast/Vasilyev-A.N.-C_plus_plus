#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// �������� ������:
class MyClass{
public:
   // ��������� ����:
   string name;
   // ������������� ����:
   int number;
   // ����� ��� ����������� �������� �����:
   void show(){
      cout<<"���� name: "<<name<<endl;
      cout<<"���� number: "<<number<<endl;
   }
};
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������� ��������:
   MyClass objA,objB;
   // ���������� ��������� �� ������:
   MyClass* p;
   // ����� ������� ������������ � ���������:
   p=&objA;
   // ������������ �������� ����� �������
   // ����� ���������:
   p->name="������ objA";
   p->number=111;
   // ����� ������ ����� ���������:
   p->show();
   // ����� �������� ���������:
   p=&objB;
   // ������������ �������� ����� �������
   // ����� ���������:
   p->name="������ objB";
   p->number=222;
   // ����� ������ ����� ���������:
   p->show();
   cout<<"��������� �������\n";
   // �������� �������� ����� ��������:
   objA.show();
   objB.show();
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}