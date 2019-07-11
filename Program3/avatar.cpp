#include"avatar.h"
/*=================================
FILE: avatar.cpp
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/
/*========================
CONSTRUCTOR
=========================*/

Avatar::Avatar():history(0)
{}
/*========================
COPY CONSTRUCTOR
=========================*/
Avatar::Avatar(const Avatar&copy)
{
    history = new char[strlen(copy.history)+1];
    strcpy(history,copy.history);
}
/*========================
DEFAULT CONSTRUCTOR
=========================*/

Avatar::Avatar(char* History)
{
    history = new char[strlen(History)+1];
    strcpy(history,History);
}
/*========================
DESTRUCTOR
=========================*/

Avatar::~Avatar()
{
    if(history)
    {
	delete [] history;
	history = NULL;
    }
}
/*========================
ADD HISTORY FUNCTION
=========================*/
int Avatar::add_h(char* History)
{
    history = new char[strlen(History)+1];
    strcpy(history,History);
}
/*========================
ADD CHARACTOR FUNCTION
=========================*/
int Avatar::add_cha(char*Name, char*Website, int Phone)
{
    cha.add(Name,Website,Phone);
}
/*========================
ADD TOOL FUNCTION
=========================*/
int Avatar::add_tool(char*Badge, char* Time, int Point)
{
    tool.add(Badge,Time,Point);
}
/*========================
ADD NEW DATA FUNCTION
=========================*/
int Avatar::add(char* His, char* Name, char* Web, int Phone, char* Bad, char* Time, int Point)
{
    history = new char[strlen(His)+1];
    strcpy(history,His);

    cha.add(Name,Web,Phone);

    tool.add(Bad,Time,Point);
}
/*========================
DISPLAY ALL FUNCTION
=========================*/
void Avatar::display_all()
{
    cha.display();
    tool.display();
    cout<<"HISTORY: "<<history<<endl;
}
/*========================
DISPLAY CHARACTER FUNCTION
=========================*/
void Avatar::display_cha()
{
    cha.display();
}
/*========================
DISPLAY TOOL FUNCTION
=========================*/
void Avatar::display_tool()
{
    tool.display();
}
/*========================
COMPARE HISTORY FUNCTION
=========================*/
int Avatar::compare(char* His)
{
    if(!strcmp(history,His))
	return -1;
    else
	return 1;
}
/*========================
CHECK FUNCTION
=========================*/
int Avatar::check(char* Name)
{
    if(!strcmp(cha.get_name(),Name))
	return 1;
    else 
	return 0;
}
/*========================
CHANGE FUNCTION
=========================*/
int Avatar::change(char* web, int phone)
{
    return cha.change(web,phone);
}
