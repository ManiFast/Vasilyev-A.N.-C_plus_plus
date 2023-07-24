#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// �������� ���������:
struct MyMoney{
   // ���� ���������:
   string name;
   double money;
   double rate;
   int time;
};
// ������� ��� ���������� (�� ������ ����������
// ���������) �������� �����:
double getMoney(MyMoney str){
   double s=str.money;
   for(int k=1;k<=str.time;k++){
      s*=(1+str.rate/100);
   }
   return s;
}
// ������� ��� ����������� ������ ����������
// ��� ���������� ���������:
void show(MyMoney str){
   cout<<"��� ���������: "<<str.name<<endl;
   cout<<"��������� �����: "<<str.money<<endl;
   cout<<"���������� ������: "<<str.rate<<endl;
   cout<<"����� (���): "<<str.time<<endl;
   cout<<"�������� �����: "<<getMoney(str)<<endl;
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������ ��������� ���������:
   MyMoney cat={"��� ���������",1000,8,5};
   // ������ ��������� ���������:
   MyMoney dog={"��� �����",1200,7,4};
   // ����������� ����������:
   show(cat);
   show(dog);
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

