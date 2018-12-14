#pragma once
#include<string>
#include<list>
#include "FileInformation.h"

class SearchEngine
{
private:
	std::string PathRoot;
	
public:

     SearchEngine(std::string PathRoot); //�������� ���� � ����������,������� ������� ������
	 SearchEngine();//������ ����������� ��� �������� � FileInformation ��� ���� ����� ������
     bool Search(std::list<FileInformation> &Out);//����� ������ �����(�������� �� ������� �����)
	 std::string SearchDirectory();//���������� ��������� ������ � ������������ ����������,� ������
	 ~SearchEngine();
	 //std::string Path();
	 std::string name_file;
};


