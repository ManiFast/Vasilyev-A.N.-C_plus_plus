#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// ���������� ���������:
template<class A,class B> struct MyStruct{
   A first;
   B second;
};
// ���������� ������� ��� ������ � ������������
// ���������� ���������:
template<class A,class B> void show(MyStruct<A,B> str){
   cout<<"������ ����: "<<str.first<<endl;
   cout<<"������ ����: "<<str.second<<endl;
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������� ����������� ���������� ���������:
   MyStruct<int,char> strA={100,'A'};
   MyStruct<double,string> strB={2.5,"�����"};
   // ����� ���������� �������:
   show(strA);
   show(strB);
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

