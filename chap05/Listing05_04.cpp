#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// �������� ������:
class MyMoney{
private:   // �������� ����� ������
   string name;
   double money;
   double rate;
   int time;
   double getMoney(){
      double s=money;
         for(int k=1;k<=time;k++){
            s*=(1+rate/100);
         }
      return s;
   }
public:   // �������� ����� ������
   // ����������� ��� ����������:
   MyMoney(){
      name="��� ���������";
      money=100;
      rate=5;
      time=1;
      cout<<"������ ����� ������:\n";
      showAll();
   }
   // ����������� � �������� �����������:
   MyMoney(string n,double m,double r,int t){
      setAll(n,m,r,t);
      cout<<"������ ����� ������:\n";
      showAll();
   }
   // ����������:
   ~MyMoney(){
      cout<<"������ ��� \""<<name<<"\" ������\n";
      for(int k=1;k<=35;k++){
         cout<<"*";
      }
      cout<<endl;
   }
   // ������ ������:
   void showAll(){
      cout<<"���: "<<name<<endl;
      cout<<"�����: "<<money<<endl;
      cout<<"������ (%): "<<rate<<endl;
      cout<<"������ (���): "<<time<<endl;
      cout<<"�������� �����: "<<getMoney()<<endl;
      for(int k=1;k<=35;k++){
         cout<<"-";
      }
      cout<<endl;
   }
   void setAll(string n,double m,double r,int t){
      name=n;
      money=m;
      rate=r;
      time=t;
   }
};
// �������:
void postman(){
   // �������� ���������� �������:
   MyMoney objD("��������� ������",200,3,2);
}
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������� ��������:
   MyMoney objA;
   MyMoney objB("���� �����",1500,8,7);
   // ����� �������:
   postman();
   // �������� ������������� �������:
   MyMoney* objC=new MyMoney("��� �����",1200,6,9);
   cout<<"��� ������� �������\n";
   // �������� ������������� �������:
   delete objC;
   cout<<"���������� ��������� ���������\n";
   cout<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}