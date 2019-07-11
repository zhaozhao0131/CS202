#ifndef _DOUBLE_H_
#define _DOUBLE_H_
/*=================================
FILE:double.h
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram2
=================================*/

#include"course.h"
/*===========================
DLL NODE CLASS
===========================*/

class DLL_node
{
    public:
	DLL_node();
	~DLL_node();

	void add_node(char*, int);
	void add_node(char*, char*, char*);
	void add_node(char*, char*, char*, int, int);
	DLL_node*& go_next();
	void connect_next(DLL_node*);
	void connect_pre(DLL_node*);
	void display();
	void dis();
	char* get();
    protected:
	Course* course;
	DLL_node* next;
	DLL_node* previous;
};
/*===========================
DLL CLASS
===========================*/

class DLL
{
    public:
	DLL();
	~DLL();
	void remove_all();
	void insert(char*, char*, char*, int);
	void insert(char* ,int);
	void insert(char*, char*, char*, int, int);
	bool display();
	bool display_all(DLL_node*&);
	bool dis();
	bool dis_all(DLL_node*&);
	bool find(char*);
	bool findkey(DLL_node*,char*);
    protected:
	DLL_node* head;
	DLL_node* tail;
};

#endif
