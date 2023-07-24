#include <iostream>
#include <cstdlib>
#include <complex>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������������� �����:
   double x=2,y=3;
   // ����������� �����:
   complex<double> A(3,4),B(2,-1);
   // ����� ����������� �����:
   cout<<"�����: ";
   cout<<A<<" + "<<B<<" = "<<A+B<<endl;
   // �������� ����������� �����:
   cout<<"��������: ";
   cout<<A<<" - "<<B<<" = "<<A-B<<endl;
   // ������������ ����������� �����:
   cout<<"������������: ";
   cout<<A<<" * "<<B<<" = "<<A*B<<endl;
   // ������� ����������� �����:
   cout<<"�������: ";
   cout<<A<<" / "<<B<<" = "<<A/B<<endl;
   // ����� ������������ � ��������������� �����:
   cout<<"�����: ";
   cout<<A<<" + "<<x<<" = "<<A+x<<endl;
   // �������� ������������ � ��������������� �����:
   cout<<"��������: ";
   cout<<A<<" - "<<x<<" = "<<A-x<<endl;
   // ������������ ������������ � ��������������� �����:
   cout<<"������������: ";
   cout<<A<<" * "<<x<<" = "<<A*x<<endl;
   // ������� ������������ � ��������������� �����:
   cout<<"�������: ";
   cout<<A<<" / "<<x<<" = "<<A/x<<endl;
   // ����� ��������������� � ������������ �����:
   cout<<"�����: ";
   cout<<y<<" + "<<B<<" = "<<y+B<<endl;
   // �������� ��������������� � ������������ �����:
   cout<<"��������: ";
   cout<<y<<" - "<<B<<" = "<<y-B<<endl;
   // ������������ ��������������� � ������������ �����:
   cout<<"������������: ";
   cout<<y<<" * "<<B<<" = "<<y*B<<endl;
   // ������� ��������������� � ������������ �����:
   cout<<"�������: ";
   cout<<y<<" / "<<B<<" = "<<y/B<<endl;
   // �������������� ����� ������������ �����:
   cout<<"�������������� �����: ";
   cout<<"Re"<<A<<" = "<<A.real()<<endl;
   // ������ ����� ������������ �����:
   cout<<"������ �����: ";
   cout<<"Im"<<A<<" = "<<A.imag()<<endl;
   // ������ ������������ �����:
   cout<<"������: ";
   cout<<"abs"<<A<<" = "<<abs(A)<<endl;
   // �������� ������������ �����:
   cout<<"��������: ";
   cout<<"arg"<<A<<" = "<<arg(A)<<endl;
   // ����������-����������� �����:
   cout<<"����������-�����������: ";
   cout<<A<<"* = "<<conj(A)<<endl;
   // ����������� ����� �� ������ ������ � ���������:
   cout<<"����������� �����: ";
   cout<<polar(abs(A),arg(A))<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}