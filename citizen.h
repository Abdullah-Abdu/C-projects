/*
	Name: Jay Aka Jaykumar Vansjalia
	StudentID: 1178483
	Program: Citizen
	Description:  Header File
*/
#include <iostream>
#ifndef CITIZEN_H
#define CITIZEN_H
#include<string.h>
using namespace std;
enum m_lang
{
    GERMAN,
    ENGLISH,
    SPANISH
};
class citizen
{
public:
    citizen();
    citizen(m_lang,string);
    void m_sayHello();
    ~citizen();
private:
    string name;
    int s_size;
    m_lang i_lang;
};
#endif // CITIZEN


