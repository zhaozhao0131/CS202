#include"char.h"
#include"avatar.h"
#include"bst.h"
/*=================================
FILE: main.cpp
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/
int main()
{
    cout<<"=========================================="<<endl;
    cout<<"THIS IS A AVATAR SYSTEM"<<endl;

    BST bst;
    cout<<"Input the following code for the function"<<endl;
    cout<<"=========================================="<<endl;
    int input =0;
    do{
	cout<<"================================="<<endl;
	cout<<"[1] Add Avatar"<<endl;
	cout<<"[2] Display tool information"<<endl;
	cout<<"[3] Display all avatar"<<endl;
	cout<<"[4] Search Avatar and show character info."<<endl;
	cout<<"[5] Change character information"<<endl;
	cout<<"[0] Exit."<<endl;

	cout<<"================================="<<endl;
	cin>>input;
	cin.ignore();
	switch(input)
	{
	    case 1:{
		    //===============================[1] Add Avatar
		       char his[50];
		       char name[50];
		       char web[50];
		       int phone =0;
		       char bad[50];
		       char time[50];
		       int point=0;
		       cout<<"Please enter the Name of avatar: ";
		       cin.get(name,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter the Website of avatar: ";
		       cin.get(web,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter the Phone Number of avatar: ";
		       cin>>phone;
		       cin.ignore();
		       cout<<"Please enter the Badges info. you got: ";
		       cin.get(bad,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter the Time you in this game: ";
		       cin.get(time,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter the History of your avatar: ";
		       cin.get(his,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter the points you got: ";
		       cin>>point;
		       cin.ignore();
		       bst.add(his,name,web,phone,bad,time,point);
		       break;
		   }
	    case 2:{
		    //==================================[2] Display tool information
		       bst.display_tool();
		       break;
		   }
	    case 3:{
		    //================================[3] Display all avatar
		       bst.display();
		       break;
		   }
	    case 4:{
		    //=============================[4] Search Avatar and show character info."
		       char Name[50];
		       cout<<"Please enter the Name want be found: ";
		       cin.get(Name,50,'\n');
		       cin.ignore(100,'\n');
		       if(bst.search(Name))
			   cout<<" FIND "<<endl;
		       else
			   cout<<" NOT FIND! "<<endl;
		       break;
		   }
	    case 5:{
		    //============================[5] Change character information
		       char Name[50];
		       char web[50];
		       int phone =0;

		       cout<<"Please enter the Name of avatar want be change info : ";
		       cin.get(Name,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter NEW Website of avatar: ";
		       cin.get(web,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter NEW Phone Number of avatar: ";
		       cin>>phone;
		       cin.ignore();
		       bst.change(Name,web,phone);


		       break;
		   }
	    default:{
			if(input)
			    cout<<"invalit input"<<endl;
			break;
		    }
	}
    }while(input!=0);
}

