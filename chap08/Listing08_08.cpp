#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������������� ���������� ��������� �����:
   srand(2);
   // ���������� ���������:
   int n;
   cout<<"���������� ��������: ";
   // ���������� �������� ��� ����������:
   cin>>n;
   // �������� ������� ������������� �������:
   vector<char> symbs;
   cout<<"|";
   // ���������� ��������� � ������������ ������:
   while(symbs.size()<n){
      // � ����� ������� ����������� ����� �������:
      symbs.push_back('A'+rand()%(n+5));
      // ����������� ��������
      // ���������� �������� � �������:
      cout<<" "<<symbs[symbs.size()-1]<<" |";
   }
   cout<<endl;
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}