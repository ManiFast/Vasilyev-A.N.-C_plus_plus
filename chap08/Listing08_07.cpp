#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������������� ���������� ��������� �����:
   srand(2);
   // ���������� ��������:
   int n;
   cout<<"���������� ��������: ";
   // ���������� ��������:
   cin>>n;
   // ������ � ���������� ��������:
   vector<char> symbs(n,'A');
   // ��������:
   vector<char>::iterator p;
   cout<<"|";
   // ���������� �������� ��������� �������
   // � ����������� ���� �������� � �������:
   for(p=symbs.begin();p!=symbs.end();p++){
      // ���������� �������� ��������
      // (������ ����� ��������):
      *p+=rand()%(n+5);
      // ����������� �������� ��������:
      cout<<" "<<*p<<" |";
   }
   cout<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}