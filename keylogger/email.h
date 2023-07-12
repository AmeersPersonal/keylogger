#pragma once
#include <string>
#include<windows.applicationmodel.email.h>
#include <asyncinfo.h>
class email
{

    private:
        std::string sender;
        double last_sent;
        std::string FILE_PATH;


        void Compose_email();
        double last_sent_log();

 
};

