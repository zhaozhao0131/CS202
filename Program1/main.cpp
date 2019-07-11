#include"graph.h"
#include"package.h"
#include"delivery.h"
/*=================================
FILE:main.cpp
NAME:Jiacheng Zhao
ID NUMBER:922943778
CS202 Porgram1
=================================*/
int main()
{
    cout<<"===================================="<<endl;
    cout<<"This is a Delivery system"<<endl;

    LLL package;
    Vertex* vertex = new Vertex;
    Delivery delivery;

    cout<<"===================================="<<endl;

    cout<<"Input the following code for the function"<<endl;
    int input = 0;
    int X = 0;
    int Y = 0;
    int Z = 0;

    do{

    cout<<"===================================="<<endl;
    cout<<"1 add package"<<endl;
    cout<<"2 move package"<<endl;
    cout<<"3 display package and location"<<endl;
    cout<<"4 search package"<<endl;
    cout<<"0 Exit system."<<endl;

    cin>>input;
    cin.ignore();
    switch(input)
    {
	case 1:{
		   //================Add package=====================
		   char pp[50];
		   cout<<"Please enter the name of package:"<<endl;
		   cin.get(pp,50,'\n');
		   cin.ignore(100,'\n');
		   package.insert(pp);

		   char Name[50];
		   cout<<"Please enter the way to delivery: "<<endl;
		   cout<<"Standard / Express / Drone"<<endl;
		   cin.get(Name,50,'\n');
		   cin.ignore(100,'\n');
		   
		   cout<<"Please enter the location of package(x,y,z)"<<endl;
		   cin>>X;
		   cin.ignore();
		   cin>>Y;
		   cin.ignore();
		   cin>>Z;
		   cin.ignore();
		   delivery.add(X,Y,Z,Name);

		   break;
	       }
	case 2:{
		   //===================Move package=================
		   cout<<"Please enter new location package to go(x,y,z)"<<endl;
		   cin>>X;
		   cin.ignore();
		   cin>>Y;
		   cin.ignore();
		   cin>>Z;
		   cin.ignore();
		   delivery.move(X,Y,Z);

		   break;
	       }
	case 3:{
		   //===================Display package==================
		   package.display();
		   delivery.display();

		   break;
	       }
	case 4:{
		   //===================Find package===================
		   char Name[50];
		   cout<<"Please enter the name to find: "<<endl;
		   cin.get(Name,50,'\n');
		   cin.ignore(100,'\n');
		   
		   if(delivery.compare(Name))
		       cout<<"FIND!!"<<endl;
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

