#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ���������� ��� ������ ������� �������:
   int n;
   cout<<"����� ���������\n";
   cout<<"������� ������ �������: ";
   // ���������� ������� �������:
   cin>>n;
   // �������������� ���:
   try{
      // �������� ��������� �������:
      vector<int> fibs(n,1);
      // ����������� �������� ������ ���� ���������:
      cout<<fibs[0]<<" "<<fibs[1];
      // ���������� ������� � �����������
      // �������� ��������� �������:
      for(int k=2;k<n;k++){
         fibs[k]=fibs[k-1]+fibs[k-2];
         cout<<" "<<fibs[k];
      }
   }
   // ���� ��������� ������:
   catch(...){
      cout<<"��������� ������!";
   }
   cout<<"\n��������� ��������� ����������...\n";
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}