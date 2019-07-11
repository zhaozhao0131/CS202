#include"node.h"
/*==========================
FILE: node.cpp
NAME: jiacheng Zhao
ID NUMBER: 922943778
CS202 Program1
==========================*/
/*=======================
DEFAULT CONSTRUCTOR
=======================*/
Lnode::Lnode()
{
    car = NULL;
    next = NULL;
}
/*=======================
DESTRUCTOR
=======================*/
Lnode::~Lnode()
{
    if(car)
    {
	delete car;  //solved problem. when car is created for LLL use "delete car"
			//to delete car object. Not "delete [] car". 
	                    //"delete []" just for, which created by "new []".
	car = NULL;
    }
    next = NULL;
}
/*=======================
ADD NODE FUNCTION
=======================*/
void Lnode::add_node(char*name, int speed, bool stop, int lane,int flag)
{
    if(flag == 1)
	car = new Sportcar(name, speed, stop,lane);
    if(flag == 2)
	car = new Bus(name, speed, stop,lane);
    if(flag == 3)
	car = new Truck(name, speed, stop,lane);
}
/*=======================
GO NEXT FUNCTION
=======================*/
Lnode*& Lnode::go_next()
{
    return next;
}
/*=======================
CONNECT NEXT FUNCTION
=======================*/
void Lnode::connect_next(Lnode* source)
{
    if(source == NULL)
	next = NULL;
    else
	next = source;
}
/*=======================
CHANGE SPEED FUNCTION
=======================*/
void Lnode::change_speed(int speed)
{
    car->change_speed(speed);
}
/*=======================
CHANGE CONDITION FUNCTION
=======================*/
void Lnode::change_stop(bool stop)
{
    car->change_stop(stop);
}

/*=======================
DISPALY FUNCTION
=======================*/
void Lnode::display()
{
    car->display();
}
/*=======================
GET NAME FUNCTION
=======================*/
char* Lnode::get_name()
{
    return car->get_name();
}
/*=======================
DEFAULT CONSTRUCTOR
=======================*/
LLL::LLL():head(0)
{}
/*=======================
DESTRUCTOR
=======================*/
LLL::~LLL()
{
    remove_all();
}
/*=======================
REMOVE ALL FUNCTION 
=======================*/
void LLL::remove_all()
{
    remove(head);
    head = NULL;
}
/*=======================
REMOVE FUNCTION
=======================*/
void LLL::remove(Lnode*& head)
{
    if(!head)
	return;

    remove(head->go_next());

    Lnode* temp = NULL;
    temp = head->go_next();
    delete head;
    head = temp;
    return;
}
/*=======================
INSERT FUNCTION
=======================*/
void LLL::insert(char* name, int speed,bool stop,int lane,int flag)
{
    Lnode* temp = new Lnode();
    temp -> add_node(name,speed,stop,lane,flag);
    temp -> connect_next(NULL);
    if(head == NULL)
    {
	head = temp;
    }
    else
    {
	temp -> connect_next(head);
	head = temp;
    }
}
/*=======================
DISPLAY FUNCTION
=======================*/
bool LLL::display()
{
    return display_all(head);
}

bool LLL::display_all(Lnode* head)
{
    if(!head)
	return false;
    head->display();
    return display_all(head->go_next());
}
/*=======================
CHANGE SPEED FUNCTION
=======================*/
bool LLL::change_speed(char* name,int speed)
{
    change_speed(head,name,speed);
}
bool LLL::change_speed(Lnode* head, char*name,int speed)
{
    if(!head)
	return false;
    if(!strcmp(name,head->get_name()))
    {
	head->change_speed(speed);
	return true;
    }
    return change_speed(head->go_next(),name,speed);
}
    
/*=======================
CHANGE STOP FUNCTION
=======================*/
bool LLL::change_stop(char*name, bool stop)
{
    change_stop(head,name,stop);
}
bool LLL::change_stop(Lnode* head, char* name, bool stop)
{
    if(!head)
	return false;
    if(!strcmp(name,head->get_name()))
    {
	head->change_stop(stop);
	return true;
    }
    return change_stop(head->go_next(),name,stop);
}
/*=======================
COMPARE FUNCTION
=======================*/
bool LLL::compare(char*name)
{
    return compare(head,name);
}
bool LLL::compare(Lnode* head,char* name)
{
    if(!head)
	return false;
    if(!strcmp(name,head->get_name()))
	return true;
    return compare(head->go_next(),name);
}


