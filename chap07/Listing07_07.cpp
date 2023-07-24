#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// ���������� �����:
template<class T> class MyClass{
private:
   // �������� ����:
   T value;
public:
   // �����������:
   MyClass(T v){
      value=v;
   }
   // ����� ��� ����������� �������� ����:
   void show(){
      cout<<"�������� ����: "<<value<<endl;
   }
};
// ����� ������������� ������:
template<> class MyClass<string>{
private:
   // �������� ���� - ������:
   char value[100];
public:
   // �����������:
   MyClass(char* str){
      int k;
      // ������ ������ � ���� - �������:
      value[0]='|';
      // ���������� ���� - �������:
      for(k=0;str[k];k++){
         value[2*k+1]=str[k];
         value[2*k+2]='|';
      }
      // ���������� ����-������� � ����� �������:
      value[2*k+1]='\0';
   }
   void show(){
      cout<<value<<endl;
   }
};
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   MyClass<int> objA(100);
   // �������� �������� �� ������ ����������� ������:
   MyClass<char> objB('A');
   MyClass<char*> objC("�����");
   MyClass<string> objD("�����");
   // ����� ������ �� �������, ���������� ��
   // ������ ����������� ������:
   objA.show();
   objB.show();
   objC.show();
   objD.show();
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

