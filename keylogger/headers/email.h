#pragma once


#ifndef EMAIL_CLASS

#define EMAIL_CLASS

#include<string>
#include <iostream>
#include "curl/include/curl/curl.h"


using namespace std;


class email
{

	public:
		string email_sender;
		double last_sent; //this will be in seconds
		bool send(string email_Sender,FILE* log);




		

};

#endif 