#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   system("chcp 1251>nul");
   int n,s,k;
   cout<<"¬ведите верхнюю границу дл€ суммы: ";
   cin>>n;
   for(k=1,s=0;k<=n;s+=k*k,k++);
   cout<<"—умма квадратов чисел от 1 до "<<n<<": "<<s<<endl;
   system("pause>nul");
   return 0;
}