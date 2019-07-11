#ifndef _NODE_H_
#define _NODE_H_
/*==========================
FILE: node.h
NAME: jiacheng Zhao
ID NUMBER: 922943778
CS202 Program1
==========================*/

#include"car.h"


#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>


using namespace std;
/*=======================
Lnode CLASS
=======================*/
class Lnode
{
    public:
	Lnode();
	Lnode(char*, int, bool);
	~Lnode();
	void add_node(char*,int,bool,int,int);
	Lnode*& go_next();
	void connect_next(Lnode*);
	void display();
	char* get_name();
	void change_speed(int);
	void change_stop(bool);
    private:
	CAR* car;
	Lnode*next;
};

/*=======================
LLL CLASS
=======================*/
class LLL
{
    public:
	LLL();
	~LLL();
	void remove_all();
	void insert(char*,int,bool,int,int);
	bool display();
	bool display_all(Lnode*);
	bool change_speed(char*,int);
	bool change_speed(Lnode*, char*,int);
	bool change_stop(char*,bool);
	bool change_stop(Lnode*, char*,bool);
	bool compare(char*);
	bool compare(Lnode*,char*);
    private:
	void remove(Lnode*&);
	Lnode* head;
};


#endif
