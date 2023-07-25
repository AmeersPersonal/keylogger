#include <iostream>
#include <direct.h>


#include "one_time_creation.h"

#pragma warning(disable : 4996)
/*
All the things that will need to be only exucted once will be in here
ex: log files



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