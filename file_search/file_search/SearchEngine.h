#pragma once
#include<string>
#include<list>
#include "FileInformation.h"

class SearchEngine
{
public:
	 SearchEngine();
	 void SearchDirectory(std::string PathRoot, std::list<FileInformation> &Out);
     bool Search(std::list<FileInformation> &Out);//метод поиска файла(проверка на пустоту далее)
	 ~SearchEngine();
};


