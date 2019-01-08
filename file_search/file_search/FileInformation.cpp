#include "pch.h"
#include "FileInformation.h"
#include<iostream>
#include<string>

std::string FileInformation::Print() {
    return nameFile;
}

std::string FileInformation::FindFile()
{
	std::string example;
	/*std::cout << "Vvedite: ";
	std::cin >> example;
		if (example == nameFile) {
			std::cout << example;
			
		}
		else {
			std::cout << "Empty is File" << std::endl;
			exit(0);
		}*/
	return example;
}

FileInformation::FileInformation(std::string in) {
	nameFile = in;
}


FileInformation::~FileInformation()
{
}


