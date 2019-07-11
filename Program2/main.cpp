#include"double.h"
#include"node.h"
using namespace std;
/*=================================
FILE:main.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram2
=================================*/

int main()
{
    cout<<"===================================="<<endl;
    cout<<"THIS IS A Course Material SYSTEM"<<endl;
    DLL dll;
    CLL cll;

    cout<<"Input the following code for the function"<<endl;
    int input=0;

    do
    {
	cout<<"======================"<<endl;
	cout<<"[1]ADD NEW COURSE"<<endl;
	cout<<"[2]DISPLAY ALL COURSE"<<endl;
	cout<<"[3]DISPLAY ALL MATERIAL"<<endl;
	cout<<"[4]SEARCH COURSE"<<endl;
	cout<<"[0]EXIT"<<endl;

	cin>>input;
	cin.ignore();
	switch(input)
	{
	    case 1:{
		//=======================add new course============================
		       cout<<"ENTER the COURSE NAME: "<<endl;
		       char name[50];
		       cin.get(name,50,'\n');
		       cin.ignore(100,'\n');

		       cout<<"CHOOSE THE MATERIALS"<<endl;
		       cout<<"[1] Reading"<<endl;
		       cout<<"[2] Exercise"<<endl;
		       cout<<"[3] Video"<<endl;
		       int flag = 0;
		       cin>>flag;
		       cin.ignore();
		       if(flag ==1)
		       {
			   cout<<"ENTER the TITLE: ";
			   char title[50];
			   cin.get(title,50,'\n');
			   cin.ignore(100,'\n');
			   cout<<"ENTER the AUTHOR: ";
			   char author[50];
			   cin.get(author,50,'\n');
			   cin.ignore(100,'\n');
			   cout<<"ENTER the Page: ";
			   int page = 0;
			   cin>>page;
			   cin.ignore();
			   dll.insert(name,title,author,page,flag);
		       }
		       if(flag ==2)
		       {
			   cout<<"ENTER the NAME: ";
			   char nn[50];
			   cin.get(nn,50,'\n');
			   cin.ignore(100,'\n');
			   cout<<"ENTER the QUESTION: ";
			   char question[50];
			   cin.get(question,50,'\n');
			   cin.ignore(100,'\n');

			   dll.insert(name, nn, question,flag);
		       }
		       if(flag ==3)

		       dll.insert(name,flag);
		       break;
		   }
	    case 2:{
		//=========================display all course==========================
		      cout<<"[Display]"<<endl;
		      dll.display();
		       break;
		   }
	    case 3:{
		//=========================display all materical==========================
		       dll.dis();
		       break;
		   }
	    case 4:{
		//=========================search course==========================
		       cout<<"ENTER THE COURSE WANT TO FIND"<<endl;
			char key[50];
		       cin.get(key,50,'\n');
		       cin.ignore(100,'\n');

		       if(dll.find(key))
			   cout<<"FIND!"<<endl;
		       else
			   cout<<"NOT FIND"<<endl;

		       break;
		   }
	    default:{
			if(input)
			    cout<<"invalid input"<<endl;
			break;
		    }
	}
    }while(input!=0);
}
