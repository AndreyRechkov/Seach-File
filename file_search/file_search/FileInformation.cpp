#include "pch.h"
#include "FileInformation.h"
#include<iostream>
#include "SearchEngine.h"

void FileInformation::ExampleFile() {
	SearchEngine exe;
	nameFile = exe.Path();
	std::cout << nameFile;
}




std::string FileInformation::Print() {
  return "Here shoud be information about foundFile";
}

FileInformation::FileInformation() {
	
}


FileInformation::~FileInformation()
{
}


