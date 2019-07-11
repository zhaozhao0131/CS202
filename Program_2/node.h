#ifndef _NODE_H_
#define _NODE_H_
#include"trans.h"
/*=====================
FILE: node.h
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
NODE CLASS
===================*/
class Node
{
    public:
	Node();
	~Node();
	void add_node(char*, int, int, bool, bool, int);
	void add_Node(char*, int, int, bool, bool, int);
	void add_node(char*, int, int, bool, bool);
	Node*& go_next();
	void connect_next(Node*);
	void connect_pre(Node*);
	void display();
	int get_cost();
	int get();

	
    private:
	Node* next;
	Node* pre;
	Trans* trans;
};
/*===================
DLL CLASS
===================*/

class DLL
{
    public:
	DLL();
	~DLL();
	void remove_all();
	void insert(char*,int,int,bool,bool,int);
	void Insert(char*,int,int,bool,bool,int);
	void insert(char*,int,int,bool,bool);
	bool display();
	bool display_all(Node*);
	int display_cost();
	int display_cost(Node*);
	bool find(int);
	bool find(Node*, int);
    protected:
	Node* head;
	Node* tail;	
};

#endif
