#include "pch.h"
#include "SearchEngine.h"
#include<iostream>
#include<fstream>
#include <Windows.h>
#include "FileInformation.h"
#include <algorithm>
#include <string>
#include<vector>

SearchEngine::SearchEngine()
{
}


SearchEngine::~SearchEngine()
{
}
bool SearchEngine::Search(std::list<FileInformation> &Out) { return false; }


void SearchEngine::SearchDirectory(const std::string &PathRoot, std::list<FileInformation> &Out)
{
	std::string tmp = PathRoot + "\\*";
	HANDLE hFind;
	WIN32_FIND_DATAA PathRoot2;

	hFind = FindFirstFileA(tmp.c_str(), &PathRoot2);
	//PathRoot.erase(PathRoot.find('*'));
	//PathRoot.append(PathRoot2.cFileName);
	if (hFind == INVALID_HANDLE_VALUE) {
		std::cout << ("Invalid file handle. Error  \n", GetLastError());

	}
	else {
		std::list<std::string> Example;
		
		do
		{
			if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				if ((!lstrcmpA(PathRoot2.cFileName, ".")) || (!lstrcmpA(PathRoot2.cFileName, "..")))
					continue;
			}
			tmp = PathRoot + "\\" + PathRoot2.cFileName;
			//std::cout << tmp << std::endl;

			if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) 
				Example.push_back(tmp);
			    Out.push_back(tmp);
		
			//if (strcmp(PathRoot2.cFileName, ".") == 0 || strcmp(PathRoot2.cFileName, "..") == 0) continue;
			//if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_SYSTEM) { continue; }

			/*if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				SearchDirectory("d", Out);
				PathRoot.append(PathRoot2.cFileName);
				std::string(PathRoot2.cFileName);
				
			}
				FileInformation Example(PathRoot + PathRoot2.cFileName);
				Out.push_back(Example);*/
		} while (FindNextFileA(hFind, &PathRoot2));
		FindClose(hFind);
		for (std::list<std::string>::iterator iter = Example.begin(), end = Example.end(); iter != end; ++iter) 
			SearchDirectory(*iter, Out);
		//FileInformation Example();
		//Out.push_back(tmp);
	}
}