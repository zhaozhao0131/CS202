#ifndef _FOOD_H_
#define _FOOD_H_

#include<iostream>
#include<cstring>
#include<cctype>
#include<fstream>
/*==============================
 FILE: food.h
 NAME: Jiacheng Zhao
 ID NUMBER: 922943778
 CS202 PROGRAM 3
==============================*/
/*=====================
FOOD BASED CLASS
=====================*/

using namespace std;

class Food{
    public:
	Food();
	Food(const Food&);
	Food(char*,char*);
	~Food();
	virtual void display() =0;
	virtual int compare(char*);
	virtual bool check(char*);
	virtual int change(char*, char*);
    protected:
	char* name;
	char* sp;
};
/*=====================
MAIN DERIVED CLASS
=====================*/
class Main: public Food
{
    public:
	Main();
	Main(char*, char*);
	~Main();
	void display();
    protected:

};
/*=====================
DESERT DERIVED CLASS
=====================*/
class Desert: public Food
{
    public:
	Desert();
	Desert(char*, char*);
	~Desert();
	void display();
    protected:
};
/*=====================
BERVER DERIVED CLASS
=====================*/
class Bever: public Food
{
    public:
	Bever();
	Bever(char*, char*);
	~Bever();
	void display();
    protected:
};

#endif
