#include "pch.h"
#include "SearchEngine.h"
#include<iostream>
#include<fstream>
#include <Windows.h>


SearchEngine::SearchEngine(std::string PathRoot)
{
}

SearchEngine::~SearchEngine()
{
}
SearchEngine::SearchEngine()
{
	PathInfo = PathRoot;//������ �������� � FileInformation 
}


bool SearchEngine::Search(std::list<FileInformation> &Out) { return false; }
void SearchEngine::SearchDirectory()
{
	static const char* chFolderpath = "C:\\windows\\*";
	HANDLE hFind;
	WIN32_FIND_DATAA PathRoot2; // <- WIN32_FIND_DATAA if using char strings (instead of TCHAR strings) 
	hFind = FindFirstFileA(chFolderpath, &PathRoot2);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			if (PathRoot2.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY)
				PathRoot += "<DIR>"; // strings use += instead of strcat
			PathRoot += PathRoot2.cFileName;
			PathRoot += '\n';
		} while (FindNextFileA(hFind, &PathRoot2));
		FindClose(hFind);
	}
	//std::cout<<PathRoot;
	
}














