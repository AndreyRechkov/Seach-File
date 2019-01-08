#include "pch.h"
#include "SearchEngine.h"
#include<iostream>
#include<fstream>
#include <Windows.h>
#include "FileInformation.h"
#include <algorithm>
#include <string>

SearchEngine::SearchEngine()
{
}


SearchEngine::~SearchEngine()
{
}
bool SearchEngine::Search(std::list<FileInformation> &Out) { return false; }


void SearchEngine::SearchDirectory(std::string PathRoot, std::list<FileInformation> &Out)
{
	HANDLE hFind;
	std::string data;
	WIN32_FIND_DATAA PathRoot2;
	hFind = FindFirstFileA(PathRoot.c_str(), &PathRoot2);
	PathRoot.erase(PathRoot.find('*'));
	//PathRoot.append(PathRoot2.cFileName);
	if (hFind == INVALID_HANDLE_VALUE) {
		std::cout << ("Invalid file handle. Error %d \n", GetLastError());

	}
	else {

		do
		{
			if (strcmp(PathRoot2.cFileName, ".") == 0 || strcmp(PathRoot2.cFileName, "..") == 0) continue;
			//if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_SYSTEM) { continue; }

			if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				//PathRoot.append(PathRoot2.cFileName);
				//PathRoot.append( "\\");
				//std::cout <<PathRoot + PathRoot2.cFileName << std::endl;
				//SearchDirectory(PathRoot, Out);
				//while (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				//SearchDirectory(PathRoot, Out);//??????????????
				//strcat_s(PathRoot2.cFileName, "\\");//Add in Directory "\\" 
				//}
			    FileInformation Example(PathRoot2.cFileName);
				Out.push_back(Example);
				//std::cout << PathRoot2.cFileName << std::endl;
			}
		} while (FindNextFileA(hFind, &PathRoot2));
		FindClose(hFind);
	}
}