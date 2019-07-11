#include"node.h"
/*=====================
FILE: node.cpp
NAME: JIACHENG ZHAO
ID NUMBER: 922943778
CS 202 PROGRAM2
======================*/
/*=====================
DEFAULT CONSTUCTOR
======================*/
Node::Node():next(0),pre(0)
{}
/*=====================
DESTRUCTOR
======================*/
Node::~Node()
{
    if(trans)
    {
	delete trans;
	trans = NULL;
    }
    next = NULL;
    pre = NULL;

}
/*=====================
ADD NODE FUNCTION
======================*/
void Node::add_node(char* close, int id, int cost, bool check, bool repair,int Ba)
{
    trans = new Scooter(close,id,cost,check,repair,Ba);
}
void Node::add_Node(char* close, int id, int cost, bool check, bool repair,int gas)
{
    trans = new Zipcar(close,id,cost,check,repair,gas);

}
void Node::add_node(char* close, int id, int cost, bool check, bool repair)
{
    trans = new Rent(close,id,cost,check,repair);
}
/*=====================
GO NEXT FUNCTION
======================*/
Node*& Node::go_next()
{
    return next;
}
/*=====================
CONNECT NEXT FUNCTION
======================*/
void Node::connect_next(Node* source)
{
    if(source==NULL)
	next = NULL;
    else
	next = source;
}
/*=====================
CONNECT PER FUNCTION
======================*/
void Node::connect_pre(Node* source)
{
    if(source==NULL)
	pre = NULL;
    else
	pre = source;
}
/*=====================
DIPSLAY FUNCTION
======================*/
void Node::display()
{
    trans->display();
}
/*=====================
GET COST FUNCTION
======================*/
int Node::get_cost()
{
    return trans->get_cost();
}
/*=====================
GET ID FUNCTION
======================*/
int Node::get()
{
    return trans->get();
}
/*=====================
DEFAULT CONSTRUCTOR
======================*/
DLL::DLL():head(0),tail(0)
{}
/*=====================
REMOVE ALL FUNCTION
======================*/
void DLL::remove_all()
{
    Node* curr = head;
    while(head)
    {
	curr = head->go_next();
	delete head;
	head = curr;
    }
    head = NULL;
    tail = NULL;
}
/*=====================
DESTRUCTOR
======================*/
DLL::~DLL()
{
    remove_all();
}
/*=====================
INSERT FUNCTIONS
======================*/
void DLL::insert(char* close, int id, int cost, bool check, bool repair,int Ba)
{
    Node* temp = new Node();
    temp ->add_node(close,id,cost,check,repair,Ba);
    temp->connect_next(NULL);
    temp->connect_pre(NULL);
    if(head == NULL)
    {
	head = temp;
    }
    else
    {
	temp ->go_next()=head;
	head = temp;
    }
}
void DLL::Insert(char* close, int id, int cost, bool check, bool repair,int gas)
{
    Node* temp = new Node();
    temp ->add_Node(close,id,cost,check,repair,gas);
    temp->connect_next(NULL);
    temp->connect_pre(NULL);
    if(head == NULL)
    {
	head = temp;
    }
    else
    {
	temp ->go_next()=head;
	head = temp;
    }
}
void DLL::insert(char* close, int id, int cost, bool check, bool repair)
{
    Node* temp = new Node();
    temp ->add_node(close,id,cost,check,repair);
    temp->connect_next(NULL);
    temp->connect_pre(NULL);
    if(head == NULL)
    {
	head = temp;
    }
    else
    {
	temp ->go_next()=head;
	head = temp;
    }
}
/*=====================
DISPLAY ALL FUNCTION 
======================*/
bool DLL::display()
{
    return display_all(head);
}
bool DLL::display_all(Node*head)
{
    if(!head)
	return false;
    head -> display();
    return display_all(head->go_next());
}
/*=====================
DISPLAY COST FUNCTION 
======================*/ 
int DLL::display_cost()
{
    return display_cost(head);
}
int DLL::display_cost(Node*head)
{
    if(!head)
	return 0;
    return head->get_cost() + display_cost(head->go_next());
}
/*=====================
FIND KEY FUNCTION
======================*/
bool DLL::find(int key)
{
    return find(head,key);
}
bool DLL::find(Node* head, int key)
{
    if(!head)
	return false;
    if(head->get() == key)
    {
	head->display();
	return true; } return find(head->go_next(),key);
}
