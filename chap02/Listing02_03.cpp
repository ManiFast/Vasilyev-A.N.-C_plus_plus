#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   system("chcp 1251>nul");
   int n,s=0,k=1;
   cout<<"¬ведите верхнюю границу дл€ суммы: ";
   cin>>n;
   for(;k<=n;){
      s+=k*k;
      k++;
   }
   cout<<"—умма квадратов чисел от 1 до "<<n<<": "<<s<<endl;
   system("pause>nul");
   return 0;
}