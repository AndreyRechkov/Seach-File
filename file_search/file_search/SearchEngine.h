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
        bool Search(std::list<FileInformation> &Out);//����� ������ �����(�������� �� ������� �����)
		void SearchDirectory(std::list<FileInformation>);//���������� ��������� ������ � ������������ ����������,� ������
		bool AddInList(std::list < FileInformation> &input);
		~SearchEngine();
};


