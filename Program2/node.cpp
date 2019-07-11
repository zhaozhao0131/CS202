#include"node.h"
/*=================================
FILE:node.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram2
=================================*/
/*===========================
CONSTRUCTOR
===========================*/

CLL_node::CLL_node()
{
    name = NULL;
    question = NULL;
    next = NULL;
}
/*===========================
COPY CONSTRUCTOR
===========================*/

CLL_node::CLL_node(CLL_node& copy)
{
    name = new char[strlen(copy.name)+1];
    strcpy(name,copy.name);
}
/*===========================
DESTRUCTOR
===========================*/

CLL_node::~CLL_node()
{
    if(name)
    {
	delete [] name;
	name = NULL;
    }
    if(question)
    {
	delete [] question;
	question = NULL;
    }
}
/*===========================
ADD NODE FUNCTION
===========================*/

void CLL_node::add_node(char* Name, char* Q)
{
    name = new char[strlen(Name)+1];
    strcpy(name,Name);

    question = new char[strlen(Q)+1];
    strcpy(question,Q);
}
/*===========================
GO NEXT FUNCTION
===========================*/

CLL_node*& CLL_node::go_next()
{
    return next;
}
/*===========================
CONNECT NEXT FUNCTION
===========================*/

void CLL_node::connect_next(CLL_node* source)
{
    if(source == NULL)
	next = NULL;
    else 
	next = source;
}

char* CLL_node::get_word()
{
    return name;
}

void CLL_node:: display()
{
    cout<<"NAME: "<<name<<endl;
    cout<<"QUESTION: "<<question<<endl;
}
/*===========================
CLL CLASS
===========================*/
/*===========================
CONSTRUCTOR
===========================*/

CLL::CLL():rear(0)
{}
/*===========================
REMOVE ALL FUNCTION
===========================*/

void CLL::remove_all()
{
    CLL_node* curr = rear;
    while(rear)
    {
	curr = rear->go_next();
	delete rear;
	rear = curr;
    }
    rear = NULL;
}
/*===========================
DESTRUCTOR
===========================*/

CLL::~CLL()
{
    remove_all();
}
/*===========================
INSERT FUNCTION
===========================*/

void CLL::insert(char* Name, char* Q)
{
    CLL_node* temp = new CLL_node();
    temp ->add_node(Name,Q);
    temp->connect_next(NULL);
    if(rear == NULL)
	rear = temp;
    else{
	temp ->go_next() = rear;
	rear = temp;
    }
}
/*===========================
DISPALY FUNCTION
===========================*/

bool CLL::display()
{
    return display_all(rear);
}
bool CLL::display_all(CLL_node*& rear)
{
    if(!rear)
	return false;
    rear->display();
    return display_all(rear->go_next());
}

