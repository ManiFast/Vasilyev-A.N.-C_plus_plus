#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ��������� �� ����� �����:
   int* size;
   // ������������ ��������� ������ ��� ����������:
   size=new int;
   cout<<"������� ������ �������: ";
   // ���������� �������� � ����������:
   cin>>*size;
   // ��������� �� ���������� ��������:
   char* symbs;
   // �������� ����������� �������:
   symbs=new char[*size];
   // ���������� �������:
   for(int k=0;k<*size;k++){
      symbs[k]='a'+k;
      cout<<symbs[k]<<" ";
   }
   // �������� �������:
   delete [] symbs;
   // �������� ����������:
   delete size;
   cout<<"\n������ � ���������� �������\n";
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

