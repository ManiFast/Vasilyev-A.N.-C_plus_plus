#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������������� ����������:
   int num;
   // ������������� ���������� ��������� �����:
   srand(2);
   // �������� �����:
   for(int k=1;k<=10;k++){
      // ��������� ����� �� 2 �� 8:
      num=2+rand()%7;
      // �������� ������:
      switch(num){
         case 3:
         case 6:
            cout<<num<<": ����� ������� �� ���"<<endl;
            break;
         case 2:
         case 4:
         case 8:
            cout<<num<<": ������� ������"<<endl;
            break;
         case 5:
            cout<<num<<": �������"<<endl;
            break;
         case 7:
            cout<<num<<": �������"<<endl;
      }
   }
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}