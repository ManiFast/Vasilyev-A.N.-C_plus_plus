#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// �������, ������������ ���������������� ���������:
double f(double x,double y){
   return x*x*exp(-x)-y;
}
// ������� ��� ������� �����������������
// ��������� ������� ������:
double dsolve(double (*f)(double,double),double x0,double y0,double x){
   // ���������� ����������:
   int n=1000;
   // ���������� �� ���������:
   double h=(x-x0)/n;
   // ��������� �������� ������� �������:
   double y=y0;
   // ���������� �������� ������� � �����:
   for(int k=0;k<n;k++){
      y=y+h*f(x0+k*h,y);
   }
   // �������� ������� ������� � �����:
   return y;
}
// �������, ������������ ������ �������
// ����������������� ���������:
double Y(double x){
   return (x*x*x/3+1)*exp(-x);
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������ �������� ���������, ��� �������
   // ����������� ������� ����������������� ���������:
   double x[]={0,0.5,1,3,10};
   cout<<"������� ����������������� ���������:\n";
   for(int k=0;k<5;k++){
      cout<<dsolve(f,0,1,x[k])<<" vs. "<<Y(x[k])<<endl;
   }
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}