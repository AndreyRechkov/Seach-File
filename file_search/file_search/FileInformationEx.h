#pragma once//прочитать про виртуальный деструктор

#include "FileInformation.h"
class FileInformationEx :
	public FileInformation
{
public:
	FileInformationEx();
	~FileInformationEx();
};

