#pragma once 
/*

*/
#include <string>
#include<list>
#include<vector>
class FileInformation  
{
private:
	std::string nameFile;
	std::vector<std::wstring> directories;
public: 
		   std::string Print();
		   std::string FindFile();
		   FileInformation(std::string in);
	       ~FileInformation();
		  
};

