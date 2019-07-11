#include"trans.h"
/*=====================
FILE: trans.cpp
NAME: JIACHENG ZHAO
ID NUMBER: 922943778
CS 202 PROGRAM2
======================*/
/*=====================
DEFAULT CONSTRUCTOR
======================*/
Trans::Trans():close(0),id(0),cost(0),check(0),repair(0)
{}
/*=====================
CONSTRUCTOR
======================*/
Trans::Trans(char* Close, int Id, int Cost, bool Check, bool Repair)
{
    close = new char[strlen(Close)+1];
    strcpy(close,Close);
    id = Id;
    cost = Cost;
    check = Check;
    repair = Repair;
}
/*=====================
COPY CONSTRUCTOR
======================*/
Trans::Trans(const Trans& copy)
{
    close = new char[strlen(copy.close)+1];
    strcpy(close, copy.close);
    id = copy.id;
    cost = copy.cost;
    check = copy.check;
    repair = copy.repair;
}
/*=====================
DESTRUCTOR
======================*/
Trans::~Trans()
{
    if(close)
    {
	delete [] close;
	close = NULL;
    }
    id = cost = check = repair = 0;
}
/*=====================
DISPLAY FUNCTION
======================*/
void Trans::display()
{
    cout<<"[The Closest Place: "<<close<<"]"<<endl;
    cout<<"[ID number: "<<id<<"]"<<endl;
    cout<<"[Cost per hour: "<<cost<<"]"<<endl;
    if(check==true)
	cout<<"*It Can be Rent Now~"<<endl;
    else
	cout<<"*It is used Now!"<<endl;
    if(repair==true)
	cout<<"*It is good Condition~"<<endl;
    else
	cout<<"*It need to Repair!"<<endl;
}

/*=====================
SCOOTER CLASS MEMBER
======================*/
Scooter::Scooter():battery(0)
{}

Scooter::Scooter(char* close, int id, int cost, bool check, bool repair,int Ba):Trans(close, id, cost, check,repair),battery(Ba)
{}

Scooter::~Scooter()
{
    battery = 0;
}

void Scooter::display()
{
    cout<<"-----HERE IS INFORMATION OF [Scooters]-----"<<endl;
    Trans::display();
    cout<<"[Battery: "<<battery<<"%]"<<endl;

}
int Scooter::get_cost()
{
    return cost;
}
int Scooter::get()
{
    return id;
}
/*=====================
ZIPCAR CLASS MEMBER
======================*/
Zipcar::Zipcar():gas(0)
{}
Zipcar::Zipcar(char* close, int id, int cost, bool check, bool repair,int Gas):Trans(close, id, cost, check,repair),gas(Gas)
{}

Zipcar::~Zipcar()
{
    gas = 0;
}
void Zipcar::display()
{
    cout<<"-----HERE IS INFORMATION OF [Zipcar]-----"<<endl;
    Trans::display();
    cout<<"[Gas: "<<gas<<"%]"<<endl;
}
int Zipcar::get_cost()
{
    return cost;
}
int Zipcar::get()
{
    return id;
}
/*=====================
RENT CLASS MEMBER
======================*/
Rent::Rent()
{}
Rent::Rent(char* close, int id, int cost, bool check, bool repair):Trans(close, id, cost, check,repair)
{}
Rent::~Rent()
{}
void Rent::display()
{
    cout<<"-----HERE IS INFORMATION OF [Rent]-----"<<endl;
    Trans::display();
}

int Rent::get_cost()
{
    return cost;
}
int Rent::get()
{
    return id;
}
