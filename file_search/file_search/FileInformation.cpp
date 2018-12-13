#include "pch.h"
#include "FileInformation.h"
#include<iostream>
#include "SearchEngine.h"

void FileInformation::ExampleFile() {
	SearchEngine connection;//переменная для связи
	nameFile = connection.PathInfo;
	std::cout << nameFile << std::endl;//получеие строки PathRoot в nameFile(проблема,в передачи самих названий файлов)
}
std::string FileInformation::Print() {
  return "Here shoud be information about foundFile";
}

FileInformation::FileInformation() {
}


FileInformation::~FileInformation()
{
}


