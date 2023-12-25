#include <iostream>
#include <direct.h>


#include "one_time_creation.h"

#pragma warning(disable : 4996)
/*
code that only needs to be runned once
1. log files

FUTURE STUFF::


*/



void path_creation()
{

	try
	{
		_mkdir("C:/logged");


	}
	catch (const std::exception& e)
	{
		std::cout << "file/path exists already" << std::endl;
	}
}

