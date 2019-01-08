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


void SearchEngine::SearchDirectory(const std::wstring &PathRoot, std::list<FileInformation> &Out)
{
	std::wstring tmp = PathRoot + L"\\*";
	HANDLE hFind;
	WIN32_FIND_DATAW PathRoot2;

	hFind = FindFirstFileW(tmp.c_str(), &PathRoot2);
	//PathRoot.erase(PathRoot.find('*'));
	//PathRoot.append(PathRoot2.cFileName);
	if (hFind == INVALID_HANDLE_VALUE) {
		std::cout << ("Invalid file handle. Error  \n", GetLastError());

	}
	else {
		std::vector<std::wstring> directories;
		do
		{
			if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				if ((!lstrcmpW(PathRoot2.cFileName, L".")) || (!lstrcmpW(PathRoot2.cFileName, L"..")))
					continue;
			}
			tmp = PathRoot + L"\\" + std::wstring(PathRoot2.cFileName);
			std::wcout << tmp << std::endl;

			if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
				directories.push_back(tmp);
			//if (strcmp(PathRoot2.cFileName, ".") == 0 || strcmp(PathRoot2.cFileName, "..") == 0) continue;
			//if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_SYSTEM) { continue; }

			/*if (PathRoot2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				SearchDirectory("d", Out);
				PathRoot.append(PathRoot2.cFileName);
				std::string(PathRoot2.cFileName);
				
			}
				FileInformation Example(PathRoot + PathRoot2.cFileName);
				Out.push_back(Example);*/
		} while (FindNextFileW(hFind, &PathRoot2));
		FindClose(hFind);
		for (std::vector<std::wstring>::iterator iter = directories.begin(), end = directories.end(); iter != end; ++iter)
			SearchDirectory(*iter,Out);
		//FileInformation Example();
		//Out.push_back(Example);
	}
}