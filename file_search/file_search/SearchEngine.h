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
	 SearchEngine();//второй конструктор для передачи в FileInformation без него выдаёт ошибку
     bool Search(std::list<FileInformation> &Out);//метод поиска файла(проверка на пустоту далее)
	 std::string SearchDirectory();//добавление найденных файлов в определенной директории,в строку
	 ~SearchEngine();
	 //std::string Path();
	 std::string name_file;
};


