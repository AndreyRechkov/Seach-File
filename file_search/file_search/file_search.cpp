// file_search.cpp : Этот файл содержит функцию "main". Здесь начинается и

#include "pch.h"
#include <iostream>
#include "SearchEngine.h"
#include "FileInformation.h"
#include<Windows.h>


int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 SearchEngine testEngine;
 std::list<FileInformation> foundFils;
 testEngine.Search(foundFils);
 //testEngine.SearchDirectory("c:*",foundFils);

 std::string userName;
 std::cout << "Please insert text: ";
 std::getline(std::cin, userName);
 testEngine.SearchDirectory("d:\\Example",foundFils,userName);

 /*std::string PathRoot;
 std::string you;
 std::cout << "Insert catalog: ";
 std::getline(std::cin, PathRoot);
 std::cout << "Insert volium: ";
 std::getline(std::cin, you);
 testEngine.SearchInFile(PathRoot, you);*/

 if (foundFils.empty()) {
    std::cout << "Empty list";
 }
 else {
	 for (auto i : foundFils) {
		 std::cout << i.Print() << std::endl;
	 }
 }
}
