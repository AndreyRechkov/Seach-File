#include "pch.h"
#include "SearchEngine.h"
#include<iostream>
#include<fstream>
#include <Windows.h>
#include "FileInformation.h"


SearchEngine::SearchEngine()
{
}


SearchEngine::~SearchEngine()
{
}


/*std::string  SearchEngine::Path()
{
	name_file = PathRoot;
	std::cout << name_file;
	return name_file;
}*/

bool SearchEngine::Search(std::list<FileInformation> &Out) { return false; }

void SearchEngine::SearchDirectory(std::string PathRoot,std::list<FileInformation> &Out)
{
    std::string data;
	HANDLE hFind;
	WIN32_FIND_DATAA PathRoot2; 
	hFind = FindFirstFileA(PathRoot.c_str(), &PathRoot2);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			if (PathRoot2.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY)
				data += "<DIR>";
			FileInformation Example(PathRoot2.cFileName);
			Out.push_back(Example);
		} while (FindNextFileA(hFind, &PathRoot2));
		
		FindClose(hFind);
		//std::cout << data;
	}

}
 
