#ifndef _GRAPH_H_
#define _GRAPH_H_
/*=================================
FILE:graph.h
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram1
=================================*/

#include"delivery.h"
using namespace std;

class Vertex;
class Edgelist;
class Node;

/*=========================
    Node Class
=========================*/

class Node
{
    public:
	Node();
	Node(Vertex *&);
	~Node();
	Node*& goNext();
	void setNext(Node*);
	bool compare(char*);
	void display();
    private:
	Vertex* del;
	Node* next;
};
/*=========================
    Edgelist Class
=========================*/

class Edgelist
{
    public:
	Edgelist();
	~Edgelist();
	bool remove(char*);
	void remove_all();
	void display();
	bool add();
    private:
	Node* head;
	bool remove(char*, Node*&);
	void remove_all(Node*&);
	void display(Node*);
};
/*=========================
    Vertex Class
=========================*/

class Vertex
{
    public:
	Vertex();
	Vertex(Delivery*&);
	~Vertex();
	bool remove(char*);
	void display();
	bool compare(char*);
	void fun();
	void move(int, int, int);
	bool safety();
    private:
	Delivery* dell;
	Edgelist* list;
};

#endif
