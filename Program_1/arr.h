#ifndef _ARR_H_
#define _ARR_H_
/*==========================
FILE: arr.h
NAME: jiacheng Zhao
ID NUMBER: 922943778
CS202 Program1
==========================*/

#include"node.h"

/*=======================
ARR OF LLL CLASS
=======================*/
class ARR
{
    public:
	ARR();
	~ARR();
	int insert(char*,int,bool,int,int);
	int insert(Lnode*&, char*, int, bool, int, int);
	int display();
	int numd(int, Lnode**);
	int display_all(Lnode*);
    private:
	Lnode** head;
	int size;
};

#endif
