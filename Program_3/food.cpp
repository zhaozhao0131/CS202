#include"food.h"
/*==============================
 FILE: food.cpp
 NAME: Jiacheng Zhao
 ID NUMBER: 922943778
 CS202 PROGRAM 3
==============================*/
/*=====================
DEFAULT CONSTRUCTOR
=====================*/
Food::Food():name(0),sp(0)
{}
/*=====================
COPY CONSTRUCTOR
=====================*/
Food::Food(const Food&copy)
{
    if(name)
	delete [] name;
    name = new char[strlen(copy.name)+1];
    strcpy(name,copy.name);
    if(sp)
	delete [] sp;

    sp = new char[strlen(copy.sp)+1];
    strcpy(sp,copy.sp);
}
/*=====================
DESTRUCTOR
=====================*/
Food::~Food()
{
    if(name)
    {
	delete [] name;
	name = NULL;
    }
    if(sp)
    {
	delete [] sp;
	sp = NULL;
    }
}
/*=====================
CONSTRUCTOR
=====================*/
Food::Food(char* Name, char* Sp)
{
    
    name = new char[strlen(Name)+1];
    strcpy(name, Name);
    sp = new char[strlen(Sp)+1];
    strcpy(sp, Sp);
}
/*=====================
COMPARE FUNCTION
=====================*/
int Food::compare(char* Name)
{
    if(strcmp(name,Name)<0)
	return -1;
    else
	return 1;
}
/*=====================
CHECK FUNCTION
=====================*/
bool Food::check(char* Name)
{
    if(!strcmp(name, Name))
	return true;
    else
	return false;
}
/*=====================
CHANGE FUNCTION
=====================*/
int Food::change(char* Name, char* Sp)
{
    if(name)
    {
	delete [] name;
    }
    if(sp)
    {
	delete [] sp;
    }
    name = new char[strlen(Name)+1];
    strcpy(name, Name);
    sp = new char[strlen(Sp)+1];
    strcpy(sp, Sp);
}
/*=====================
MAIN PART CLASS
=====================*/
Main::Main()
{}
Main::Main(char*Name, char* Sp):Food(Name, Sp)
{}
Main::~Main()
{}
void Main::display()
{
    cout<<"[Main Food]"<<endl;
    cout<<"-Name: "<<name<<endl;
    cout<<"-Comment: "<<sp<<endl;
}
/*=====================
DESERT PART CLASS
=====================*/
Desert::Desert()
{}
Desert::Desert(char*Name, char* Sp):Food(Name, Sp)
{}
Desert::~Desert()
{}
void Desert::display()
{
    cout<<"[Desert]"<<endl;
    cout<<"-Name: "<<name<<endl;
    cout<<"-Comment: "<<sp<<endl;
}
/*=====================
BEVER PART CLASS
=====================*/
Bever::Bever()
{}
Bever::Bever(char* Name, char* Sp):Food(Name,Sp)
{}
Bever::~Bever()
{}
void Bever::display()
{
    cout<<"[Beverages]"<<endl;
    cout<<"-Name: "<<name<<endl;
    cout<<"-Comment: "<<sp<<endl;
}

