#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
// ������ ������� ���������� �����:
template<class A> class Alpha{
public:
   // ����:
   A alpha;
   // �����������:
   Alpha(A a){
      alpha=a;
   }
   // �����:
   void show(){
      cout<<"���� alpha: "<<alpha<<endl;
   }
};
// ������ ������� ���������� �����:
template<class B> class Bravo{
public:
   // ����:
   B bravo;
   // �����������:
   Bravo(B b){
      bravo=b;
   }
   // �����:
   void show(){
      cout<<"���� bravo: "<<bravo<<endl;
   }
};
// ����������� ���������� �����:
template<class A,class B,class C> class Charlie: public Alpha<A>,public Bravo<B>{
public:
   // ����:
   C charlie;
   // �����������:
   Charlie(A a,B b,C c):Alpha<A>(a),Bravo<B>(b){
      charlie=c;
   }
   // ��������������� ������:
   void show(){
      // ����� ������ ������ �� ������� �������� ������:
      Alpha<A>::show();
      // ����� ������ �� ������� �������� ������:
      Bravo<B>::show();
      cout<<"���� charlie: "<<charlie<<endl;
   }
};
// ������� ������� ���������:
int main(){
   // ��������� ��������� �������:
   system("chcp 1251>nul");
   // �������� ��������:
   Charlie<string,char,int> objA("�����",'A',100);
   Charlie<int,double,char> objB(200,5.5,'B');
   // ����� ������ �� ��������:
   objA.show();
   objB.show();
   // �������� ����������� ����:
   system("pause>nul");
   return 0;
}

