#include <iostream>
#include <cstdlib>
#include <valarray>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ���������� ��� ������ ������� �������:
   int n;
   cout<<"������� ������ �������: ";
   // ���������� ������� �������:
   cin>>n;
   // �������� ��������� �������:
   valarray<int> fibs(n);
   // �������� ������ ���� ���������:
   fibs[0]=1;
   fibs[1]=1;
   cout<<fibs[0]<<" "<<fibs[1];
   // ���������� ������� � ����������� �������� ���������:
   for(int k=2;k<n;k++){
      fibs[k]=fibs[k-1]+fibs[k-2];
      cout<<" "<<fibs[k];
   }
   cout<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

