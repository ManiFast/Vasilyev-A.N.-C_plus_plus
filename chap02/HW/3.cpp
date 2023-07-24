#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  // Изменение кодировки консоли:
  system("chcp 1251>nul");

  int num;
  cin >> num;

  bool ch = true;
  int answ = 0, i = 1;
  while (ch == true)
  {
    if (num % i == 0) answ++;
    if (i > num) ch = false;

    i++;
  }

  cout << answ;

  // Задержка консольного окна:
  system("pause>nul");
  return 0;
}
