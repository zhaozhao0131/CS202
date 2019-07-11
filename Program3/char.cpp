#include"char.h"
/*=================================
FILE: char.cpp
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/
/*========================
CONSTRUCTOR
=========================*/

Character::Character():name(0),website(0),phone(0)
{}
/*========================
COPY CONSTRUCTOR
=========================*/

Character::Character(const Character&to_copy)
{
    name = new char[strlen(to_copy.name)+1];
    strcpy(name,to_copy.name);
}
/*========================
DESTRUCTOR
=========================*/

Character::~Character()
{
    if(name)
    {
	delete [] name;
	name = NULL;
    }
    if(website)
    {
	delete [] website;
	website = NULL;
    }
}
/*========================
DEFAULT CONSTRUCTOR
=========================*/

Character::Character(char* Name, char*Website, int Phone)
{
    name = new char[strlen(Name)+1];
    strcpy(name, Name);
    website = new char[strlen(Website)+1];
    strcpy(website,Website);
    phone = Phone;
}
/*========================
ADD NEW DATA FUNCTION
=========================*/

int Character::add(char* Name, char*Website, int Phone)
{
    name = new char[strlen(Name)+1];
    strcpy(name, Name);
    website = new char[strlen(Website)+1];
    strcpy(website,Website);
    phone = Phone;
}
/*========================
GET NAME FUNCTION
=========================*/

char* Character::get_name()
{
    return name;
}
/*========================
GET WEBSITE FUNCTION
=========================*/

char* Character::get_website()
{
    return website;
}
/*========================
GET PHONE FUNCTION
=========================*/

int Character::get_phone()
{
    return phone;
}
/*========================
DISPLAY FUNCTION
=========================*/

void Character::display()
{
    cout<<"NAME: "<<name<<endl;
    cout<<"WEBISTE: "<<website<<endl;
    cout<<"PHONE: "<<phone<<endl;
}
/*========================
CHANGE CHAR FUNCTION
=========================*/

int Character::change(char* Web,int Phone)
{
    website = new char[strlen(Web)+1];
    strcpy(website,Web);
    phone = Phone;
}
/*========================
CONSTRUCTOR
=========================*/

Tool::Tool():badges(0),times(0),points(0)
{}
/*========================
COPY CONSTRUCTOR
=========================*/

Tool::Tool(const Tool& copy)
{
    badges = new char[strlen(copy.badges)+1];
    strcpy(badges,copy.badges);
    times = new char[strlen(copy.times)+1];
    strcpy(times,copy.times);
}
/*========================
DESTRUCTOR
=========================*/

Tool::~Tool()
{
    if(badges)
    {
	delete [] badges;
	badges = NULL;
    }
    if(times)
    {
	delete [] times;
	times = NULL;
    }
}
/*========================
DEFUALT CONSTRUCTOR
=========================*/

Tool::Tool(char*Badges, char*Times, int Points)
{
    badges = new char[strlen(Badges)+1];
    strcpy(badges,Badges);

    times = new char[strlen(Times)+1];
    strcpy(times, Times);
    points = Points;
}
/*========================
ADD NEW DATA FUNCTION
=========================*/
int Tool::add(char*Badges, char*Times, int Points)
{
    badges = new char[strlen(Badges)+1];
    strcpy(badges,Badges);

    times = new char[strlen(Times)+1];
    strcpy(times, Times);
    points = Points;
}
/*========================
GET DATA FUNCTION
=========================*/
char* Tool::get_badges()
{
    return badges;
}
char* Tool::get_time()
{
    return times;
}
int Tool::get_points()
{
    return points;
}
/*========================
DISPLAY  FUNCTION
=========================*/
void Tool::display()
{
    cout<<"BADGES: "<<badges<<endl;
    cout<<"TIMES: "<<times<<endl;
    cout<<"POINTS: "<<points<<endl;
}
    
