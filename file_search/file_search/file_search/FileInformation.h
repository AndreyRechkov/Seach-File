#pragma once 
/*

*/
#include <string>
#include<list>
class FileInformation  
{
private:
	std::string nameFile;
public: 
		   std::string Print();
		   std::string FindFile();
		   FileInformation(std::string in);
	       ~FileInformation();
		  
};

