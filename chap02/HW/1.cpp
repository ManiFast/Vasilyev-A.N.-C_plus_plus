#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  // Изменение кодировки консоли:
  system("chcp 1251>nul");


  int num = 1, num2;
  bool tr = true;
  for (int i = 0; i < 10; i++)
  {
    if (tr == true)
    {
      if ((num % 2) != 0)
      {
        cout << num << endl;
        num2 = num;
      }

      tr = false;
    }
    else if ((num % 2) != 0)
    {
      cout << num << endl;
      num2 += num;
    }

    num++;
  }

  cout << num2;

  // Задержка консольного окна:
  system("pause>nul");
  return 0;
}
