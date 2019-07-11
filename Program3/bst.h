#ifndef _BST_H_
#define _BST_H_
#include"avatar.h"
/*=================================
FILE: bst.h
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/
/*=====================
BST NODE  CLASS
=====================*/

class T_node{
    public:
	T_node();
	~T_node();
	void add_node(char*, char*, char*, int,char*, char*, int);

	T_node& operator = (const T_node& source);
	T_node& operator = (const char* a);
	friend ostream& operator << (ostream & out, const T_node&);
	friend istream& operator >> (istream & in, T_node&);
	T_node& operator [] (T_node&);

	T_node*& go_left();
	T_node*& go_right();
	void connect_left(T_node* source);
	void connect_right(T_node* source);
	void display();
	void display_cha();
	void display_tool();
	int check(char*);
	int compare(char*);
	bool search();
	int change(char*, int);
    private:
	Avatar ava;

	T_node* left;
	T_node* right;
};
/*=====================
BST CLASS
=====================*/

class BST{
    public:
	BST();
	~BST();
	void remove_all(T_node*& );
	T_node* add(char*, char*,char*, int,char*,char*,int );
	T_node* add(T_node*&, char* ,char*,char*,int,char*,char*,int);
	void display();
	void display_all(T_node*);
	bool search(char*);
	bool search(T_node*, char*);
	void display_cha();
	void display_allc(T_node*);
	void display_tool();
	void display_allt(T_node*);
	bool change(char*,char*,int);
	bool change(T_node*, char*,char*,int);

    private:
	T_node* root;
};

#endif
