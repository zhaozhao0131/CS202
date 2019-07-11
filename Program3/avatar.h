#ifndef _ACATAR_H_
#define _ACATAR_H_
/*=================================
FILE: avatar.h
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/

#include"char.h"

#include<iostream>
#include<cstring>
#include<cctype>
#include<fstream>

using namespace std;
/*=====================
AVATAR CLASS
=====================*/
class Avatar{
    public:
	Avatar();
	Avatar(const Avatar&);
	Avatar(char*);
	~Avatar();
	void display_all();

	void display_cha();
	void display_tool();
	int add_h(char*);
	int add_cha(char*, char*, int);
	int add_tool(char*, char*, int);
	int add(char*, char*, char*, int,char*, char*, int);

	int compare(char*);
	int check(char*);
	int change(char*, int);
    protected:
	Character cha;
	Tool tool;
	char* history;
};

/*
class Boy: public Avatar
{
    public:
	Boy();
	Boy(char*);
	Boy(const Boy);
	~Boy();

	void display();
	int compare(char* );
	bool check(char* );
    protected:
};

class Girl: public Avatar
{
    public:
	Girl();
	Girl(char*);
	Girl(const Girl);
	~Girl();

	void display();
	int compare(char* );
	bool check(char* );
    protected:
};
*/
#endif	
