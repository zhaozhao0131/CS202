#include"arr.h"
/*==========================
FILE: arr.cpp
NAME: jiacheng Zhao
ID NUMBER: 922943778
CS202 Program1
==========================*/
/*=======================
CONSTRUCTOR
=======================*/
ARR::ARR()
{
    size = 3;
    head = new Lnode*[3];
    for(int i=0;i<3;++i)
    {
	head[i]=NULL;
    }
}
/*=======================
DESTRUCOR
=======================*/
ARR::~ARR()
{
    size = 0;
    *head = NULL;
}
/*=======================
INSERT WRAPPER FUNCTION
=======================*/

int ARR::insert(char* name, int speed, bool stop, int lane, int flag)
{
    return insert(*(head+lane-1),name,speed,stop,lane,flag);
}
/*=======================
INSERT FUNCTION
=======================*/
int ARR::insert(Lnode*& head,char* name, int speed,bool stop,int lane,int flag)
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
DISPLAY WRAPPER FUNCTION
=======================*/
int ARR::display()
{
    int i =1;
    return numd(i,head);
}
int ARR::numd(int i,Lnode** head)
{
    if(head< this->head+size)
    {
	if(i<4)
	    cout<<"============[LANE] "<<i<<"==========="<<endl;

	display_all(*head);
    }
    else
	return 0;
    return numd(++i,head+1);
}
/*=======================
DISPLAY FUNCTION
=======================*/
int ARR::display_all(Lnode* head)
{
    if(!head)
	return 0;
    head->display();
    return display_all(head->go_next());
}
