#ifndef _NODE_H_
#define _NODE_H_
/*=================================
FILE:node.h
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram2
=================================*/

#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>
using namespace std;

/*===========================
    CLL NODE CLASS
===========================*/
class CLL_node
{
    public:
	CLL_node();
	CLL_node(CLL_node&);
	~CLL_node();
	void add_node(char* ,char* );
	CLL_node*& go_next();
	void connect_next(CLL_node* );
	char* get_word();
	void display();

    private:
	char* name;
	char* question;
	CLL_node* next;
};
/*===========================
CLL NODE
===========================*/

class CLL
{
    public:
	CLL();
	~CLL();
	void remove_all();
	void insert(char* , char*);
	bool display();
	bool display_all(CLL_node*&);

    private:
	CLL_node* rear;
};
#endif
