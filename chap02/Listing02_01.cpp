#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ���������� ��� ������ ������� ������� �����,
   // ���������� ��� ������ �������� ����� � ���������
   // ���������� ��� ��������� �����:
   int n,s=0,k;
   cout<<"������� ������� ������� ��� �����: ";
   // ���������� ������� ������� ��� �����:
   cin>>n;
   // �������� ����� ��� ���������� ����� ��������� �����:
   for(k=1;k<=n;k++){
      // ����������� � ����� ���������� ����������:
      s+=k*k;
   }
   // ����������� ���������� ����������:
   cout<<"����� ��������� ����� �� 1 �� "<<n<<": "<<s<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}
