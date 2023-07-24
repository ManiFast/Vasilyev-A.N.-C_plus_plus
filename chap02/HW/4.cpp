#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  // Изменение кодировки консоли:
  system("chcp 1251>nul");

  int num1, num2, answ = 0;
  bool ch = true;

  cin >> num1;
  cin >> num2;

  //while (ch == true)
  //{
  //  if ((num1 % i == 0) && (num2 % i == 0))
  //  {
  //    answ = i;
  //  }
  //  if ((i > num1) || (i > num2))
  //  {
  //    ch = false;
  //  }

  //  i++;
  //}

  for (int i = 1; ((i < num1) || (i < num2)); i++)
  {
    if ((num1 % i == 0) && (num2 % i == 0))
    {
      answ = i;
    }

  }

  cout << answ << endl;


  // Задержка консольного окна:
  system("pause>nul");
  return 0;
}
