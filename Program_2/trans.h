#ifndef _TRANS_H_
#define _TRANS_H_
/*=====================
FILE: trans.h
NAME: JIACHENG ZHAO
ID NUMBER: 922943778
CS 202 PROGRAM2
======================*/

#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

/*===================
TRANS BASE CLASS
===================*/

class Trans
{
    public:
	Trans();
	Trans(char*, int, int, bool, bool);
	Trans(const Trans&);
	~Trans();
	virtual void display();
	virtual int get_cost()=0;
	virtual int get()=0;

    protected:
	char* close;
	int id;
	int cost;
	bool check;
	bool repair;

};
/*===================
SCOOTER DERIVED CLASS
===================*/

class Scooter: public Trans
{
    public:
	Scooter();
	Scooter(char*, int, int, bool, bool,int);
	~Scooter();

	void display();
	int get_cost();
	int get();
    private:
	int battery;


};
/*===================
ZIPCAR DERIVED CLASS
===================*/

class Zipcar: public Trans
{
    public:
	Zipcar();
	Zipcar(char*, int, int, bool, bool,int);
	~Zipcar();
	void display();
	int get_cost();
	int get();
    private:
	int gas;


};
/*===================
RENT DERIVED CLASS
===================*/

class Rent: public Trans
{
    public:
	Rent();
	Rent(char*, int, int, bool, bool);
	~Rent();
	void display();
	int get_cost();
	int get();
    private:

};
#endif
