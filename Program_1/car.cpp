#include"car.h"
/*==========================
FILE: car.cpp
NAME: jiacheng Zhao
ID NUMBER: 922943778
CS202 Program1
==========================*/
/*=======================
DEFAULT CONSTRUCTOR
=======================*/
CAR::CAR():name(0),speed(0),stop(0),lane(0)
{}
/*=======================
COPY CONSTRUCTOR
=======================*/
CAR::CAR(const CAR& copy)
{
    name = new char[strlen(copy.name)+1];
    strcpy(name, copy.name);
    speed = copy.speed;
    stop = copy.stop;
    lane = copy.lane;
}
/*=======================
DESTRUCTOR
=======================*/
CAR::~CAR()
{
    if(name)
    {
	delete [] name;
	name = NULL;
    }
    speed = 0;
    lane = 0;
    stop = NULL;
}
/*=======================
DESTRUCTOR
=======================*/
CAR::CAR(char* Name, int Speed, bool Stop, int Lane)
{
    name = new char[strlen(Name)+1];
    strcpy(name, Name);
    speed = Speed;
    stop = Stop;
    lane = Lane;
}
/*=======================
DISPLAY FUNCTION
=======================*/
void CAR::display()
{
    cout<<"CAR: "<<name<<endl;
    cout<<"LIMIT SPEED: "<<speed<<endl;
    if(stop == true)
	cout<<"CONDITION: STOP"<<endl;
    else
	cout<<"CONDITION: MOVING"<<endl;
    cout<<"THIS CAR IN ["<<lane<<"] LANE"<<endl;
}
/*=======================
GET NAME FUNCTION
=======================*/
char* CAR::get_name()
{
    return name;
}
/*=======================
CHANGE SPEED FUNCTION
=======================*/
void CAR::change_speed(int Speed)
{
    speed = Speed;
}
/*=======================
CHANGE CONDITION FUNCTION
=======================*/
void CAR::change_stop(bool Stop)
{
    stop = Stop;
}
/*=======================
SPORTCAR CLASS PART
=======================*/
Sportcar::Sportcar()
{}
Sportcar::Sportcar(char* name, int speed, bool stop,int lane):CAR(name,speed,stop,lane)
{}
Sportcar::Sportcar(const Sportcar&copy):CAR(copy)
{}
Sportcar::~Sportcar()
{}
void Sportcar::display()
{
    cout<<"[-Sportcar-]"<<endl;
    CAR::display();
}
/*=======================
BUS CLASS PART
=======================*/
Bus::Bus()
{}
Bus::Bus(char* name, int speed, bool stop,int lane):CAR(name,speed,stop,lane)
{}
Bus::Bus(const Bus& copy):CAR(copy)
{}
Bus::~Bus()
{}
void Bus::display()
{
    cout<<"[-Bus-]"<<endl;
    CAR::display();
}
/*=======================
TRUCK CLASS PART
=======================*/
Truck::Truck()
{}
Truck::Truck(char* name, int speed, bool stop, int lane):CAR(name,speed,stop,lane)
{}
Truck::Truck(const Truck& copy):CAR(copy)
{}
Truck::~Truck()
{}
void Truck::display()
{
    cout<<"[-Truck-]"<<endl;
    CAR::display();
}
