#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // ������������� ���������� ��������� �����:
   srand(2);
   // ���������� "��������" � �������:
   const int width=9;
   // ���������� "�����" � �������:
   const int height=5;
   // �������� ���������� �������:
   char Lts[height][width];
   // ���������� ���������� �������:
   for(int i=0;i<height;i++){
      for(int j=0;j<width;j++){
         // ��������� ����� �� 'A' �� 'Z':
         Lts[i][j]='A'+rand()%25;
         // ����������� �������� �������� �������:
         cout<<Lts[i][j]<<" ";
      }
      // ������� � ����� ������:
      cout<<endl;
   }
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

