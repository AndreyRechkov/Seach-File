// file_search.cpp : Этот файл содержит функцию "main". Здесь начинается и

#include "pch.h"
#include <iostream>
#include "SearchEngine.h"
#include "FileInformation.h"

int main() {
 SearchEngine testEngine("c:\\windows");
 FileInformation testInformation;
 
 std::list<FileInformation> foundFils;

 foundFils.push_back(testInformation);

 testEngine.Search(foundFils);//добавляет экземпляр класса в список
 testEngine.SearchDirectory();
 testInformation.ExampleFile(); //пример вывода строки из SearchEngine в FileInformation
 if (foundFils.empty()) {
    std::cout << "Empty list";
  } else {
    for (auto i : foundFils) {
      std::cout << i.Print() << std::endl;
    }
  }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и
//   другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый
//   элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий
//   элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" >
//   "Открыть" > "Проект" и выберите SLN-файл.
