// file_search.cpp : Этот файл содержит функцию "main". Здесь начинается и

#include "pch.h"
#include <iostream>
#include "SearchEngine.h"
#include "FileInformation.h"


int main() {
 SearchEngine testEngine;
 std::list<FileInformation> foundFils;
 testEngine.Search(foundFils);
 //testEngine.SearchDirectory("c:*",foundFils);
 testEngine.SearchDirectory("D:\\Example",foundFils);
 if (foundFils.empty()) {
    std::cout << "Empty list";
  } else {
    for (auto i : foundFils) {
      std::cout << i.Print() << std::endl;
    }
	for (auto i : foundFils) {
		std::cout << i.FindFile() << std::endl;

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
