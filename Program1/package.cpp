#include"package.h"
/*=================================
FILE:package.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram1
=================================*/
/*=========================
    node Class
=========================*/
/*====================
Constructor
====================*/

node::node()
{
    name = NULL;
    next = NULL;
}
/*====================
Copy constructor
====================*/

node::node(node& copy)
{
    name = new char[strlen(copy.name)+1];
    strcpy(name,copy.name);
}
/*====================
Destructor
====================*/

node::~node()
{
    if(name)
    {
	delete [] name;
	name = NULL;
    }
}
/*====================
Add node function
====================*/

void node::add_node(char* Name)
{
    name = new char[strlen(Name)+1];
    strcpy(name,Name);
}
/*====================
GO next function
====================*/

node*& node::go_next()
{
    return next;
}
/*====================
Connection function
====================*/

void node::connect_next(node* source)
{
    if(source == NULL)
	next = NULL;
    else
	next = source;
}
/*====================
Display function
====================*/

void node::display()
{
    cout<<"The name of PACKAGE: "<<name<<endl;
}
/*=========================
    LLL Class
=========================*/
/*====================
Constructor
====================*/

LLL::LLL():head(0)
{}
/*====================
Remove all function
====================*/

void LLL::remove_all()
{
    node* curr = head;
    while(head)
    {
    curr = head->go_next();
    delete head;
    head = curr;
    }
    head = NULL;
}
/*====================
Destructor
====================*/

LLL::~LLL()
{
    remove_all();
}
/*====================
Insert node function
====================*/

void LLL::insert(char* Name)
{
    node* temp = new node();
    temp ->add_node(Name);
    temp ->connect_next(NULL);
    if(head == NULL)
    {
	head = temp;
    }
    else
    {
	temp->go_next() = head;
	head = temp;
    }
}
/*====================
Wrapper display function
====================*/

bool LLL::display()
{
    return display_all(head);
}
/*====================
Display all function
====================*/

bool LLL::display_all(node*& head)
{
    if(!head)
	return false;
    head->display();
    return display_all(head->go_next());
}

