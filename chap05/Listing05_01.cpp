#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// �������� ������:
class MyMoney{
public:
   // ����:
   string name;
   double money;
   double rate;
   int time;
   // ������:
   double getMoney(){
      double s=money;
         for(int k=1;k<=time;k++){
            s*=(1+rate/100);
         }
      return s;
   }
   void showAll(){
      cout<<"���: "<<name<<endl;
      cout<<"�����: "<<money<<endl;
      cout<<"������ (%): "<<rate<<endl;
      cout<<"������ (���): "<<time<<endl;
      cout<<"�������� �����: "<<getMoney()<<endl;
   }
};
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������� �������:
   MyMoney obj;
   // ������������ �������� �����:
   obj.name="������ ���� ��������";
   obj.money=1000;
   obj.rate=8;
   obj.time=5;
   // ����� ������:
   obj.showAll();
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}