#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  // Изменение кодировки консоли:
  system("chcp 1251>nul");

  int num = 1, i = 0, answ = 0;

  do
  {
    if (num % 2 == 0)
    {
      answ += num;
    }

    num++, i++;
  } while (i < 10);
   
  cout << endl << answ << endl;

  // Задержка консольного окна:
  system("pause>nul");
  return 0;
}
