/*
	Name: Jay Aka Jaykumar Vansjalia
	StudentID: 1178483
	Program: Citizen
	Description:  Main File
*/
#include<iostream>
#include "citizen.h"
#include<string.h>
using namespace std;
int main()
{

    citizen citizen1,citizen2(ENGLISH,"Jay Vansjalia"),citizen3(SPANISH,"Jay Vansjalia");
    citizen1.m_sayHello();
    citizen2.m_sayHello();
    citizen3.m_sayHello();
    return 0;
}
