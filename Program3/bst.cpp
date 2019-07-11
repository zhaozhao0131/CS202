#include"bst.h"
/*=================================
FILE: bst.cpp
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/
/*========================
CONSTRUCTOR
=========================*/
T_node::T_node():left(0),right(0)
{}
/*========================
DESTRUCTOR
=========================*/

T_node::~T_node()
{
    left = NULL;
    right = NULL;
}
/*========================
OPERATOR = FUNCTION
=========================*/

T_node& T_node::operator = (const T_node& source)
{
    if(this==&source)
	return *this;
}
/*========================
OPERATOR = FUNCTION
=========================*/

T_node& T_node::operator = (const char* a)
{
    left = NULL;
    right = NULL;
    return *this;
}
/*========================
OPERATPR << FUNCTION
=========================*/

ostream& operator <<(ostream& out, const T_node& p)
{
    return out;
}
/*========================
OPERATOR >> FUNCTION
=========================*/

istream& operator >>(istream& in, T_node&p)
{
    return in;
}
/*========================
OPERATOR [] FUNCTION
=========================*/

T_node& T_node::operator [] (T_node& cc)
{
    if(cc.search())
	return *this;
}
/*========================
GO LEFT FUNCTION
=========================*/

T_node*& T_node::go_left()
{
    return left;
}
/*========================
GO RIGHT FUNCTION
=========================*/

T_node*& T_node::go_right()
{
    return right;
}
/*========================
ADD NODE FUCNTION
=========================*/

void T_node::add_node(char*History, char* Name, char* Web, int Phone, char* Bad,char* Time, int Point)
{
    ava.add(History, Name, Web, Phone, Bad, Time, Point);
}
/*========================
CONNECT LEFT FUNCTION
=========================*/

void T_node::connect_left(T_node* source)
{
    if(source==NULL)
	left = NULL;
    else
	left = source;
}
/*========================
CONNECT RIGHT FUNCTION
=========================*/

void T_node::connect_right(T_node*source)
{
    if(source == NULL)
	right = NULL;
    else
	right = source;
}
/*========================
DISPLAY FUNCTION
=========================*/

void T_node::display()
{
    ava.display_all();
}
void T_node::display_cha()
{
    ava.display_cha();
}
void T_node::display_tool()
{
    ava.display_tool();
}
bool T_node::search()
{
    return true;
}
/*========================
COMAPRE HISTORY FUNCTION
=========================*/

int T_node::compare(char* His)
{
    return ava.compare(His);
}
int T_node::check(char* Name)
{
    return ava.check(Name);
}
/*========================
CHANGE CHARACTER INFO
=========================*/

int T_node::change(char*web, int phone)
{
    return ava.change(web,phone);
}
/*===================
BST CLASS
===================*/

/*========================
CONSTRUCTOR
=========================*/

BST::BST():root(0)
{}
/*========================
DESTRUCTOR
=========================*/

BST::~BST()
{
    remove_all(root);
}
/*========================
REMOVE ALL FUNCTION
=========================*/

void BST::remove_all(T_node*& root)
{
    if(!root)
	return;
    if(root)
    {
	remove_all(root->go_left());
	remove_all(root->go_right());
	delete root;
	root = NULL;
    }
}
/*========================
ADD ONE NODE WRAPPER FUNCTINO
=========================*/

T_node* BST::add(char* His, char* Name, char* Web, int Phone, char* Bad, char* Time, int Point)
{
    return add(root,His,Name,Web,Phone,Bad,Time,Point);
}
/*========================
ADD ONE NODE FUNCTION
=========================*/

T_node* BST::add(T_node*& root, char* His, char* Name, char* Web, int Phone, char* Bad, char* Time, int Point)
{
    if(root==NULL)
    {
	T_node* temp = new T_node();
	temp->add_node(His,Name,Web,Phone,Bad,Time,Point);
	temp->connect_left(NULL);
	temp->connect_right(NULL);
	root = temp;
	return root;
    }
    else if(root->compare(His)<0)
	root->go_left() = add(root->go_left(), His,Name,Web,Phone,Bad,Time,Point);
    else
	root->go_right() = add(root->go_right(),His,Name,Web,Phone,Bad,Time,Point);
    return root;
}
/*========================
DISPLAY ALL FUNCTION
=========================*/

void BST::display()
{
    display_all(root);
}
void BST::display_all(T_node* root)
{
    if(!root)
	return;
    root->display();
    display_all(root->go_left());
    display_all(root->go_right());
}
/*========================
SEARCH FUNCTION
=========================*/

bool BST::search(char* Name)
{
    return search(root,Name);
}
bool BST::search(T_node* root, char* Name)
{
    if(!root)
	return false;
    if(root->check(Name))
    {
	root->display_cha();
	return true;
    }
    search(root->go_left(),Name);
    search(root->go_right(),Name);
}
/*========================
DISPLAY CHARACTER INFO.
=========================*/

 void BST::display_cha()
{
    display_allc(root);
}
void BST::display_allc(T_node* root)
{
    if(!root)
	return;
    root->display_cha();
    display_allc(root->go_left());
    display_allc(root->go_right());
}   
/*========================
DISPLAY TOOL INFORMATINO
=========================*/

void BST::display_tool()
{
    display_allt(root);
}
void BST::display_allt(T_node* root)
{
    if(!root)
	return;
    root->display_tool();
    display_allt(root->go_left());
    display_allt(root->go_right());
}
/*========================
CHANGE CHARACTER FUNCTION
=========================*/

bool BST::change(char* Name,char* web,int phone)
{
    return change(root,Name,web,phone);
}
bool BST::change(T_node* root, char* Name,char* web,int phone)
{
    if(!root)
    {cout<<"CANT FIND!"<<endl;
	return false;
    }

    if(root->check(Name))
    {
	root->change(web,phone);
	return true;
    }
    change(root->go_left(),Name,web,phone);
    change(root->go_right(),Name,web,phone);
    return true;
}
