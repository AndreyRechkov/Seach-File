#include "pch.h"
#include "FileInformation.h"
#include<iostream>
#include<string>

std::string FileInformation::Print() {
	std::cout << nameFile;
    return nameFile;
}

FileInformation::FileInformation(std::string in) {
	nameFile = in;
}


FileInformation::~FileInformation()
{
}


