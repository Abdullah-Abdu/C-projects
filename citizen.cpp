/*
	Name: Jay Aka Jaykumar Vansjalia
	StudentID: 1178483
	Program: Citizen
	Description:  Implementation
*/
#include<iostream>
#include "citizen.h"
#include<string.h>
using namespace std;

citizen::citizen():i_lang(GERMAN),name()
{
}
citizen::citizen(m_lang fin_lang,string fin_name)
{
    this->i_lang=fin_lang;

    if(fin_name.size()<50)
    {
        name=fin_name;
    }
    else
    {
        cout<<"Out of Range";
    }


}
citizen::~citizen()
{
}
void citizen::m_sayHello()
{
    switch(i_lang)
    {
    case GERMAN:
        cout<<"Hallo Welt!\n";
        break;
    case ENGLISH:
        cout<<"Hello World!\n";
        break;
    case SPANISH:
        cout<<"Hallo el mundo!\n";

    }
}

