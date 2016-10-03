#include "dumpy_server.h"
static QString hardcoded_login  =  "FastAnt";
static QString hardcoded_password  =  "12345";
static QString hardcoded_email = "some@gmail.com";

bool dumpy_server::dmupy_server_authtorise(QString login, QString pass) {
    if(login != hardcoded_login)return false;
    if(pass!=hardcoded_password)return false;
    return true;
}

void dumpy_server::dmupy_server_rigistraite(QString login, QString pass, QString email)
{
    hardcoded_login  =     login  ;
    hardcoded_password  =    pass;
    hardcoded_email =        email;
}

dumpy_server::dumpy_server()
{



}
