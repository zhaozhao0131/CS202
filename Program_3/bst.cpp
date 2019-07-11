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

void T_node::add_node(char*Name, char* Sp, int flag)
{
    if(flag ==1)
    {
	food = new Main(Name,Sp);
    }
    if(flag ==2)
    {
	food = new Desert(Name,Sp);
    }
    if(flag ==3)
    {
	food = new Bever(Name,Sp);
    }
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
    food->display();
}

bool T_node::search()
{
    return true;
}
/*========================
COMAPRE NAME FUNCTION
=========================*/

int T_node::compare(char* Name)
{
    return food->compare(Name);
}
int T_node::check(char* Name)
{
    return food->check(Name);
}
/*========================
CHANGE FOOD INFO
=========================*/
int T_node::change(char*Name, char* Sp)
{
    return food->change(Name, Sp);
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

T_node* BST::add(char* Name, char* Sp, int flag)
{
    return add(root,Name, Sp, flag);
}
/*========================
ADD ONE NODE FUNCTION
=========================*/

T_node* BST::add(T_node*& root, char* Name, char* Sp, int flag)
{
    if(root==NULL)
    {
	T_node* temp = new T_node();
	temp->add_node(Name, Sp, flag);
	temp->connect_left(NULL);
	temp->connect_right(NULL);
	root = temp;
	return root;
    }
    else if(root->compare(Name)<0)
	root->go_left() = add(root->go_left(), Name, Sp, flag);
    else
	root->go_right() = add(root->go_right(), Name, Sp, flag);
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
	root->display();
	return true;
    }
    return search(root->go_left(),Name)||
    search(root->go_right(),Name);
}
/*========================
CAHNGE FUNCTION
=========================*/
bool BST::change(char* Name,char* nnn, char* Sp)
{
    return change(root,Name, nnn,Sp);
}
bool BST::change(T_node* root, char* Name,char* nnn, char* Sp)
{
    if(!root)
    {	
	return false;
    }

    if(root->check(Name))
    {
	root->change(nnn, Sp);
	return true;
    }
    return change(root->go_left(),Name,nnn,Sp)||
    change(root->go_right(),Name,nnn,Sp);
}
