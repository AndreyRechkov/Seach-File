#include "pch.h"
#include "FileInformation.h"
#include<iostream>
#include "SearchEngine.h"

void FileInformation::ExampleFile() {
	SearchEngine connection;//���������� ��� �����
	nameFile = connection.PathInfo;
	std::cout << nameFile << std::endl;//�������� ������ PathRoot � nameFile(��������,� �������� ����� �������� ������)
}
std::string FileInformation::Print() {
  return "Here shoud be information about foundFile";
}

FileInformation::FileInformation() {
}


FileInformation::~FileInformation()
{
}


