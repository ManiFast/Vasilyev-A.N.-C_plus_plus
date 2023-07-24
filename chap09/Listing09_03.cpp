#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// �������, ������������ �������� ���������:
double f(double x){
   return 2*exp(-x)-1;
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ���������� ��������:
   int n=10;
   // ���������� ��������� ��� ���������� �����������:
   double dx=0.00001;
   // ��������� ����������� ��� ����� ���������:
   double x=0;
   // ���������� ����� ���������:
   for(int k=1;k<=n;k++){
      x=x-f(x)/((f(x+dx)-f(x))/dx);
   }
   // ����������� ����������:
   cout<<"������� ����� �������:\t"<<x<<endl;
   cout<<"����������� ��������:\t"<<log(2)<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

