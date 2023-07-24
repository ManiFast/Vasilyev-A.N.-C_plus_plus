#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include <utility>
using namespace std;
int main(){
   // Изменение кодировки консоли:
   system("chcp 1251>nul");
   // Объект для ассоциативного контейнера:
   map<string,int> numbers;
   // Размер массива:
   const int n=5;
   // Текстовый массив с ключами:
   string names[n]={"один","два","три","четыре","пять"};
   // Числовой массив со значениями элементов:
   int nms[n]={1,2,3,4,5};
   // Добавление элементов в контейнер:
   for(int k=0;k<n;k++){
      numbers.insert(pair<string,int>(names[k],nms[k]));
   }
   // Добавляется еще один элемент:
   numbers.insert(pair<string,int>("шесть",6));
   // Удаление элемента из массива:
   numbers.erase("три");
   // Итератор для работы с ассоциативным
   // контейнерным объектом:
   map<string,int>::iterator p;
   // Итератор установлен на начальный элемент:
   p=numbers.begin();
   // Отображение содержимого контейнера:
   while(p!=numbers.end()){
      cout<<(*p).first<<"\t- "<<(*p).second<<endl;
      p++;
   }
   // Явное обращение к элементам по ключу:
   cout<<"Единица\t - это "<<numbers["один"]<<endl;
   cout<<"Двойка\t - это "<<numbers.at("два")<<endl;
   // Задержка консольного окна:
   system("pause>nul");
   return 0;
}

