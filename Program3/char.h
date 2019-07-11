#ifndef _CHAR_H_
#define _CHAR_H_
/*=================================
FILE: char.h
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/
#include<iostream>
#include<cstring>
#include<cctype>
#include<fstream>

using namespace std;
/*=====================
CHARACTER CLASS
=====================*/

class Character{
    public:
	Character();
	Character(const Character&);
	Character(char*, char*, int);
	~Character();
	int add(char*,char*,int);
	char* get_name();
	char* get_website();
	int get_phone();
	void display();	
	int change(char*,int);

    protected:
	char* name;
	char* website;
	int phone;
};
/*=====================
TOOL CLASS
=====================*/

class Tool{
    public:
	Tool();
	Tool(const Tool&);
	Tool(char*, char*, int);
	~Tool();

	char* get_badges();
	char* get_time();
	int get_points();
	void display();
	int add(char*,char*,int);
    protected:
	char* badges;
	char* times;
	int points;
};

#endif
