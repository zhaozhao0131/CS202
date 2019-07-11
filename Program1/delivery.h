#include<iostream>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<fstream>
/*=================================
FILE:delivery.h
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram1
=================================*/

using namespace std;

#ifndef _DELIVERY_H_
#define _DELIVERY_H_

/*=========================
    Delivery Class
=========================*/

class Delivery
{
    public:
	Delivery();
	Delivery(int, int, int, char*);
	Delivery(Delivery&);
	~Delivery();

	void add(int, int, int, char*);
	void move(int, int, int);
	bool compare(char*);
	void display();
	void fun();

    protected:
	int x;
	int y;
	int z;
	char* name;
	int type;
};
/*=========================
    Standard Class
=========================*/

class Standard: public Delivery
{
    public:
	Standard();
	Standard(int, int, int, char*);
	void fun();
};
/*=========================
    Express Class
=========================*/

class Express: public Delivery
{
    public:
	Express();
	Express(int, int, int, char*);
	void fun();
};
/*=========================
    Drone Class
=========================*/

class Drone: public Delivery
{
    public:
	Drone();
	Drone(int, int, int, char*);
	void fun();
};

#endif
