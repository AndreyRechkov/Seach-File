#pragma once
#include<string>
#include<list>
#include "FileInformation.h"

class SearchEngine
{
private:
	std::string PathRoot;
public:
	 std::string PathInfo;
     SearchEngine(std::string PathRoot); //�������� ���� � ����������,������� ������� ������
	 SearchEngine();//������ ����������� ��� �������� � FileInformation ��� ���� ����� ������
     bool Search(std::list<FileInformation> &Out);//����� ������ �����(�������� �� ������� �����)
	 void SearchDirectory();//���������� ��������� ������ � ������������ ����������,� ������
	 ~SearchEngine();
};


