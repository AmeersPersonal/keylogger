#pragma once
#ifndef EMAIL_CLASS

#define EMAIL_CLASS
#include<string>
#include <iostream>



using namespace std;
class email
{

	public:
		string email_sender;
		double last_sent; //this will be in seconds
		bool result();
		void send(string email_Sender,FILE* log, bool result);




		

};

#endif 