#include <iostream>
#include <cstdlib>
using namespace std;
// ������ ���������� ������� � ����� ����������:
template<class X> void show(X x){
   cout<<"������� � ����� ����������\n";
   cout<<"�������� ���������: "<<x<<endl;
}
// ������ ���������� ������� � ����� �����������:
template<class X,class Y> void show(X x,Y y){
   cout<<"������� � ����� �����������\n";
   cout<<"������ ��������: "<<x<<endl;
   cout<<"������ ��������: "<<y<<endl;
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ����� ���������� ������� � ����� ����������:
   show('A');
   show(123);
   show("�����");
   // ����� ���������� ������� � ����� �����������:
   show(321,"�����");
   show('B',456);
   show('C','D');
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}


