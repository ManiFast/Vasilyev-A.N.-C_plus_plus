#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   system("chcp 1251>nul");
   int n,s,k;
   cout<<"������� ������� ������� ��� �����: ";
   cin>>n;
   for(k=1,s=0;k<=n;s+=k*k,k++);
   cout<<"����� ��������� ����� �� 1 �� "<<n<<": "<<s<<endl;
   system("pause>nul");
   return 0;
}