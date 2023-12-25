#include "email.h"




#pragma warning(disable : 4996)
bool email::send(string email_Sender, FILE* log)
{

	CURL* curl;
	curl=curl_easy_init();
	if (!curl)
	{
		return 1; //failed to use libcurl
	}
	curl_easy_setopt(curl, CURLOPT_URL, "https://mail.google.com/");
	
	


	curl_easy_cleanup(curl);



	log = fopen("C:/logged/log.txt", "a+");

	return 0;

}