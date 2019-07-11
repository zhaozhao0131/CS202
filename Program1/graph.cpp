#include"graph.h"
/*=================================
FILE:graph.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram1
=================================*/
/*=========================
    Node Class
=========================*/
/*====================
Constructor
====================*/

Node::Node()
{
    del = NULL;
    next = NULL;
}
/*====================
Copy constructor
====================*/

Node::Node(Vertex*& to_copy)
{
    del = to_copy;
}
/*====================
Destructor
====================*/

Node::~Node()
{
    del = NULL;
    next = NULL;
}
/*====================
GO next fucntion
====================*/

Node*& Node::goNext()
{
    return next;
}
/*====================
Set next function
====================*/

void Node::setNext(Node* connect)
{
    if(connect == NULL)
	next = NULL;
    else
	next = connect;
}
/*====================
Compare function
====================*/

bool Node::compare(char* name)
{
    return del->compare(name);
}
/*====================
Display function
====================*/

void Node::display()
{
    del->display();
}
/*=========================
    Edgelist Class
=========================*/
/*====================
Constructor
====================*/

Edgelist::Edgelist()
{
    head = NULL;
}
/*====================
Destructor
====================*/

Edgelist::~Edgelist()
{
    remove_all();
}
/*====================
Remove wrapper function
====================*/

bool Edgelist::remove(char* name)
{
    return remove(name, head);
}
/*====================
Remove function
====================*/

bool Edgelist::remove(char* Name, Node*& head)
{
    if(Name)
    {
	Node* temp = new Node;
	temp ->setNext(head);
	delete head;
	head = temp;
	return true;
    }
    else
	return false;
    return remove(Name, head->goNext());
}
/*====================
Remove wrapper function
====================*/

void Edgelist::remove_all()
{
    remove_all(head);
}
/*====================
Remove all function
====================*/

void Edgelist::remove_all(Node*& head)
{
    if(!head)
	return;
    remove_all(head->goNext());
    delete head;
    head = NULL;
}
/*====================
Display wrapper function
====================*/

void Edgelist::display()
{
    display(head);
}
/*====================
Display function
====================*/

void Edgelist::display(Node* head)
{
    if(!head)
	return;
    head->display();
    return display(head->goNext());
}
/*=========================
    Vertex Class
=========================*/
/*====================
Constructor
====================*/

Vertex::Vertex():dell(0),list(0)
{}
/*====================
Copy constructor
====================*/

Vertex::Vertex(Delivery*& copy)
{
    dell = copy;
}
/*====================
Destructor
====================*/

Vertex::~Vertex()
{
    dell = NULL;
    list = NULL;
}
/*====================
Display function
====================*/

void Vertex::display()
{
    dell->display();
}
/*====================
Compare function
====================*/

bool Vertex::compare(char* name)
{
    return dell->compare(name);
}
/*====================
Fun function
====================*/

void Vertex::fun()
{
    dell->fun();
}
/*====================
Move function
====================*/

void Vertex::move(int x, int y, int z)
{
    dell->move(x,y,z);
}
