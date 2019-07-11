#ifndef _PACKAGE_H_
#define _PACKAGE_H_
/*=================================
FILE:package.h
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram1
=================================*/

#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>
using namespace std;
/*=========================
    node Class
=========================*/

class node
{
    public:
	node();
	node(node&);
	~node();
	void add_node(char* );
	node*& go_next();
	void connect_next(node*);
	void display();
    private:
	char* name;
	node* next;
};
/*=========================
    LLL Class
=========================*/

class LLL
{
    public:
	LLL();
	~LLL();
	void remove_all();
	void insert(char*);
	bool display();
	bool display_all(node*&);
    private:
	node* head;
};
#endif
