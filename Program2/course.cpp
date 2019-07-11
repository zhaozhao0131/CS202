#include"course.h"
/*=================================
FILE:course.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram2
=================================*/

/*===========================
CONSTRUCTOR
===========================*/

Course::Course():name(0)
{}
/*===========================
COPY CONSTRUCTOR
===========================*/

Course::Course(const Course& copy)
{
    name = new char[strlen(copy.name)+1];
    strcpy(name,copy.name);
}
/*===========================
DESTRUCTOR
===========================*/

Course::~Course()
{
    if(name)
    {
	delete [] name;
	name = NULL;
    }
}
/*===========================
DEFAUAL CONSTRUCTOR
===========================*/

Course::Course(char* Name)
{
    name = new char[strlen(Name)+1];
    strcpy(name,Name);
}
/*===========================
READING CLASS
===========================*/

reading::reading():title(0),author(0),page(0)
{}
reading::reading(char* Name, char* Title, char* Author, int Page):Course(Name)
{
    title = new char[strlen(Title)+1];
    strcpy(title, Title);
    author = new char[strlen(Author)+1];
    strcpy(author,Author);
    page = Page;
}
reading::reading(const reading& to_copy,const reading& copy):Course(copy)
{
    title = new char[strlen(to_copy.title)+1];
    strcpy(title, to_copy.title);
    author = new char[strlen(to_copy.author)+1];
    strcpy(author, to_copy.author);
}
reading::~reading()
{
    if(title)
    {
	delete [] title;
	title = NULL;
    }
    if(author)
    {
	delete [] author;
	author = NULL;
    }
}

void reading::change()
{
    cout<<"[Reading Part]"<<endl;
    cout<<"COURSE: "<<name<<endl;
    }
void reading::dis()
{
    cout<<"[Reading Part]"<<endl;
    cout<<"TITLE: "<<title<<endl;
    cout<<"AUTHOR: "<<author<<endl;
    cout<<"PAGE: "<<page<<endl;
}
char* reading::get()
{
    return name;
}
/*===========================
EXERCISE CLASS
===========================*/

exercise::exercise():nn(0),question(0)
{}
exercise::exercise(char* Name,char* Nn, char* Question):Course(Name)
{
    nn = new char[strlen(Nn)+1];
    strcpy(nn, Nn);
    question = new char[strlen(Question)+1];
    strcpy(question, Question);
}
exercise::exercise(const exercise& to_copy, const exercise& copy):Course(copy)
{
    nn = new char[strlen(to_copy.nn)+1];
    strcpy(nn, to_copy.nn);
    question = new char[strlen(to_copy.question)+1];
    strcpy(question, to_copy.question);
}

exercise::~exercise()
{
    if(nn)
    {
	delete [] nn;
	nn = NULL;
    }
    if(question)
    {
	delete [] question;
	question = NULL;
    }
}
void exercise::change()
{
    cout<<"[Exercise Part]"<<endl;
    cout<<"COURSE: "<<name<<endl;
}
void exercise::dis()
{
    cout<<"[Exercise Part]"<<endl;
    cout<<"NAME: "<<nn<<endl;
    cout<<"QUESTION: "<<question<<endl;
}
char* exercise::get()
{
    return name;
}
/*===========================
VIDEO CLASS
===========================*/

video::video()
{}
video::video(char* Name):Course(Name)
{}
video::video(const video&copy):Course(copy)
{}
video::~video()
{}
void video::change()
{
    cout<<"[Video Part]"<<endl;
    cout<<"COURSE: "<<name<<endl;
}
void video::dis()
{
    cout<<"[Video Part]"<<endl;
    cout<<"YOUTUBE"<<endl;
}
char* video::get()
{
    return name;
}
