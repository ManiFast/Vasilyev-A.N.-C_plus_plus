#include <iostream>
#include <cstdlib>
using namespace std;
// ���������� �������:
template<class X> void show(X arg){
   cout<<arg<<endl;
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ����� ���������� ������� � ���������� ����������:
   show('A');
   // ����� ���������� ������� � �������� ����������:
   show(123);
   // ����� ���������� ������� � ��������� ����������:
   show("�����");
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

