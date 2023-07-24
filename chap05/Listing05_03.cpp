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
   void showAll(){
      cout<<"���: "<<name<<endl;
      cout<<"�����: "<<money<<endl;
      cout<<"������ (%): "<<rate<<endl;
      cout<<"������ (���): "<<time<<endl;
      cout<<"�������� �����: "<<getMoney()<<endl;
   }
   // ������ � �������� �����������:
   void setAll(string n,double m,double r,int t){
      name=n;
      money=m;
      rate=r;
      time=t;
   }
   // ������ � ����� �����������:
   void setAll(double m,double r,int t){
      money=m;
      rate=r;
      time=t;
   }
   // ������ � ��������� ����������:
   void setAll(string n){
      name=n;
   }
   // ������ � ������������� ����������:
   void setAll(int t){
      time=t;
   }
   // ������ � ����� ����������� ���� double:
   void setAll(double m,double r){
      money=m;
      rate=r;
   }
   // ������ � ����� ����������� (���� double � ���� bool):
   void setAll(double x,bool s=true){
      if(s){
         money=x;
      }
      else{
         rate=x;
      }
   }
};
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������� �������:
   MyMoney obj;
   // ������������ �������� �����:
   obj.setAll("������ ���� ��������",1000,8,5);
   obj.showAll();
   cout<<endl;
   // ��������� �����:
   obj.setAll("������ ���� ��������");
   obj.showAll();
   cout<<endl;
   // ��������� ������� ������:
   obj.setAll(10);
   obj.showAll();
   cout<<endl;
   // ��������� ��������� �����:
   obj.setAll(1200.0);
   obj.showAll();
   cout<<endl;
   // ��������� ��������� �����:
   obj.setAll(1500,true);
   obj.showAll();
   cout<<endl;
   // ��������� ���������� ������:
   obj.setAll(6,false);
   obj.showAll();
   cout<<endl;
   // ��������� ��������� �����, ���������� ������ �
   // ������� ���������� ��������:
   obj.setAll(1000,8,5);
   obj.showAll();
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}