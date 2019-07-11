#ifndef _COURSE_H_
#define _COURSE_H_
/*=================================
FILE:course.h
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram2
=================================*/

#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

/*===========================
    COURSE BASE CLASS
===========================*/

class Course{
    public:
	Course();
	Course(const Course&);
	Course(char*);
	~Course();
	virtual void change()= 0;
	virtual void dis()=0;
	virtual char* get()=0;
    protected:
	char* name;
};
/*===========================
READING DERIVED CLASS
===========================*/

class reading: public Course
{
    public:
	reading();
	reading(char*,char*, char*, int);
	reading(const reading&,const reading&);
	~reading();
	void change();
	void dis();
	char* get();
    protected:
	char* title;
	char* author;
	int page;
};
/*===========================
EXERCISE DERIVED CLASS
===========================*/

class exercise: public Course
{
    public:
	exercise();
	exercise(char*,char*, char*);
	exercise(const exercise&,const exercise&);
	~exercise();
	void change();
	void dis();
	char* get();
    protected:
	char* nn;
	char* question;
};
/*===========================
VIDER DERIVED CLASS
===========================*/

class video: public Course
{
    public:
	video();
	video(char*);
	video(const video&);
	~video();
	void change();
	void dis();
	char* get();
    protected:
};

#endif
