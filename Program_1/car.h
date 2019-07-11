#ifndef _CAR_H_
#define _CAR_H_
/*==========================
FILE: car.h
NAME: jiacheng Zhao
ID NUMBER: 922943778
CS202 Program1
==========================*/

#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>


using namespace std;

/*=======================
CAR BASE CLASS
=======================*/
class CAR
{
    public:
	CAR();
	CAR(char*, int, bool,int);
	CAR(const CAR&);
	~CAR();
	virtual void display();
	char* get_name();
	void change_speed(int );
	void change_stop(bool);

    protected:
	char* name;
	int speed;
	bool stop;
	int lane;

};
/*=======================
SPORTCAR DERIVED CALSS
=======================*/
class Sportcar: public CAR
{
    public:
	Sportcar();
	Sportcar(char*, int, bool,int);
	Sportcar(const Sportcar&);
	~Sportcar();
	void display();
	
    protected:
};
/*=======================
BUS DERIVED CLASS
=======================*/
class Bus: public CAR
{
    public:
	Bus();
	Bus(char*, int, bool,int);
	Bus(const Bus&);
	~Bus();
	void display();
	
    protected:
};
/*=======================
TRUCK DERIVED CLASS
=======================*/
class Truck: public CAR
{
    public:
	Truck();
	~Truck();
	Truck(char*, int, bool,int);
	Truck(const Truck&);
	void display();
	
    protected:

};

#endif
