#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include <utility>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������ ��� �������������� ����������:
   map<string,int> numbers;
   // ������ �������:
   const int n=5;
   // ��������� ������ � �������:
   string names[n]={"����","���","���","������","����"};
   // �������� ������ �� ���������� ���������:
   int nms[n]={1,2,3,4,5};
   // ���������� ��������� � ���������:
   for(int k=0;k<n;k++){
      numbers.insert(pair<string,int>(names[k],nms[k]));
   }
   // ����������� ��� ���� �������:
   numbers.insert(pair<string,int>("�����",6));
   // �������� �������� �� �������:
   numbers.erase("���");
   // �������� ��� ������ � �������������
   // ������������ ��������:
   map<string,int>::iterator p;
   // �������� ���������� �� ��������� �������:
   p=numbers.begin();
   // ����������� ����������� ����������:
   while(p!=numbers.end()){
      cout<<(*p).first<<"\t- "<<(*p).second<<endl;
      p++;
   }
   // ����� ��������� � ��������� �� �����:
   cout<<"�������\t - ��� "<<numbers["����"]<<endl;
   cout<<"������\t - ��� "<<numbers.at("���")<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

