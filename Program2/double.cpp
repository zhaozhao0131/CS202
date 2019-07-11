#include"double.h"
/*=================================
FILE:double.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram2
=================================*/

/*===========================
CONSTRUCTOR
===========================*/

DLL_node::DLL_node():next(0),previous(0)
{}
/*===========================
DESTRUCTOR
===========================*/

DLL_node::~DLL_node()
{
}
/*===========================
ADD NODE FUNCTION
===========================*/

void DLL_node::add_node(char* Name, int flag)
{
    if(flag ==3)
	course = new video(Name);
}
void DLL_node::add_node(char* Name,char* nn, char* question)
{
    course = new exercise(Name, nn, question);
}

void DLL_node::add_node(char* Name, char* Title, char* Author, int page, int flag)
{
    course = new reading(Name,Title, Author, page);
}

DLL_node*& DLL_node::go_next()
{
    return next;
}
/*===========================
CONNECT NEXT FUNCTION
===========================*/

void DLL_node::connect_next(DLL_node* source)
{
    if(source==NULL)
	next = NULL;
    else
	next = source;
}
/*===========================
CONNECT PREVIOUS FUNCTION
===========================*/

void DLL_node::connect_pre(DLL_node* source)
{
    if(source==NULL)
	previous = NULL;
    else
	previous = source;
}
/*===========================
DISPLAY FUNCTION
===========================*/

void DLL_node::display()
{
    course->change();
}
void DLL_node::dis()
{
    course->dis();
}
char* DLL_node::get()
{
    return course->get();
}
DLL::DLL():head(0),tail(0)
{}
/*===========================
REMOVE ALL FUNCTION
===========================*/

void DLL::remove_all()
{
    DLL_node* curr = head;
    while(head)
    {
	curr = head->go_next();
	delete head;
	head = curr;
    }
    head = NULL;
    tail = NULL;
}
DLL::~DLL()
{
    remove_all();
}
/*===========================
REMOVE ALL FUNCTION
===========================*/

void DLL::insert(char* Name, char* nn, char* question,int flag)
{
    DLL_node* temp = new DLL_node();
    temp ->add_node(Name,nn,question);
    temp->connect_next(NULL);
    temp->connect_pre(NULL);
    if(head ==NULL)
    {
	head = temp;
    }
    else
    {
	temp ->go_next() = head;
	head = temp;
    }
}
void DLL::insert(char* Name, char* Title, char* Author, int Page, int flag)
{
    DLL_node* temp = new DLL_node();
    temp ->add_node(Name,Title,Author,Page,flag);
    temp->connect_next(NULL);
    temp->connect_pre(NULL);
    if(head ==NULL)
    {
	head = temp;
    }
    else
    {
	temp ->go_next() = head;
	head = temp;
    }
}
void DLL::insert(char* Name, int flag)
{
    DLL_node* temp = new DLL_node();
    temp ->add_node(Name,flag);
    temp->connect_next(NULL);
    temp->connect_pre(NULL);
    if(head ==NULL)
    {
	head = temp;
    }
    else
    {
	temp ->go_next() = head;
	head = temp;
    }
}
/*===========================
DISPLAY COURSE FUNCTION
===========================*/

bool DLL::display()
{
    return display_all(head);
}

bool DLL::display_all(DLL_node*& head)
{
    if(!head)
	return false;
    head->display();
    return display_all(head->go_next());
}
/*===========================
DISPLAY MATERICAL FUNCTION
===========================*/

bool DLL::dis()
{
    return dis_all(head);
}

bool DLL::dis_all(DLL_node*& head)
{
    if(!head)
	return false;
    head->dis();
    return dis_all(head->go_next());
}
/*===========================
FIND KEY WOED FUNCTION
===========================*/

bool DLL::find(char* key)
{
    return findkey(head,key);
}
bool DLL::findkey(DLL_node* head,char * key)
{
    if(!head)
	return false;
    if(!strcmp(key, head->get()))
	return true;
    return findkey(head->go_next(),key);
}
