#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������������� ����������:
   int num,k;
   // ����������� �������� �����:
   for(k=1;k<=5;k++){
      cout<<"������� ����� �� 1 �� 3: ";
      // ���������� �������� ����������:
      cin>>num;
      // ����������� �������� ������:
      switch(num){
         case 1:
            cout<<"��� �������"<<endl;
            break;
         case 2:
            cout<<"��� ������"<<endl;
            break;
         case 3:
            cout<<"��� ������"<<endl;
            break;
         default:
            cout<<"� �� ���� ������ �����"<<endl;
      }
   }
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}