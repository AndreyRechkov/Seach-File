#pragma once
#include<string>
#include<list>
#include "FileInformation.h"

class SearchEngine
{
private:
	std::string PathRoot;
public:
        SearchEngine(std::string PathRoot); //Передать путь к директории,создать атрибут класса
        bool Search(std::list<FileInformation> &Out);//метод поиска файла(проверка на пустоту далее)
		void SearchDirectory(std::list<FileInformation>);//добавление найденных файлов в определенной директории,в строку
		bool AddInList(std::list < FileInformation> &input);
		~SearchEngine();
};


