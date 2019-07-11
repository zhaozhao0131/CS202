#include"delivery.h"
/*=================================
FILE:delivery.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram1
=================================*/

/*=========================
    Delivery Class
=========================*/
/*====================
Constructor
====================*/
Delivery::Delivery()
:x(0),y(0),z(0),name(0),type(0)
{}
/*====================
Copy constructor
====================*/

Delivery::Delivery(int x, int y, int z, char* Name)
{
    this->x = x;
    this->y = y;
    this->z = z;
    name = new char[strlen(Name)+1];
    strcpy(name,Name);
}
/*====================
Copy constructor
====================*/

Delivery::Delivery(Delivery& copy)
{
    x = copy.x;
    y = copy.y;
    z = copy.z;
    name = new char[strlen(copy.name)+1];
    strcpy(name,copy.name);
}
/*====================
Destructor
====================*/

Delivery::~Delivery()
{
    if(name)
    {
	delete [] name;
	name = NULL;
    }
}
/*====================
Add new delivery
====================*/

void Delivery::add(int X, int Y, int Z, char* Name)
{
    x= X;
    y= Y;
    z= Z;
    name = new char[strlen(Name)+1];
    strcpy(name,Name);
}
/*====================
Move location
====================*/

void Delivery::move(int X, int Y, int Z)
{
    x= X;
    y= Y;
    z= Z;
}
/*====================
Compare name
====================*/

bool Delivery::compare(char* Name)
{
    if(!name)
	return false;
    if(!strcmp(name,Name))
	return true;
    else
	return false;
}
/*====================
Display function
====================*/

void Delivery::display()
{
    cout<<"Delivery: "<<name<<endl;
    cout<<"Location: "<<x<<","<<y<<","<<z<<endl;
}
/*====================
Fun function
====================*/

void Delivery::fun()
{
    cout<<"Delivery"<<endl;
}
/*=========================
    Standard Class
=========================*/

/*====================
Constructor
====================*/

Standard::Standard():Delivery()
{
    type = 1;
}
/*====================
Copy Constructor
====================*/

Standard::Standard(int x,int y, int z, char*Name):Delivery(x,y,z,Name)
{}
/*====================
Fun function
====================*/

void Standard::fun()
{
    cout<<"STANDARD"<<endl;
}
/*=========================
    Express Class
=========================*/

/*====================
Constructor
====================*/

Express::Express():Delivery()
{
    type = 2;
}
/*====================
Copy constructor
====================*/

Express::Express(int x,int y, int z, char*Name):Delivery(x,y,z,Name)
{}
/*====================
Fun function
====================*/

void Express::fun()
{
    cout<<"EXPRESS"<<endl;
}
/*=========================
    Drone Class
=========================*/

/*====================
Constructor
====================*/

Drone::Drone():Delivery()
{
    x = 0;
    y = 0;
    z = 0;
    type = 3;
}
/*====================
Copy constructor
====================*/

Drone::Drone(int x,int y, int z, char*Name):Delivery(0,0,0,Name)
{}
/*====================
Fun function
====================*/

void Drone::fun()
{
    cout<<"Drone"<<endl;
}

