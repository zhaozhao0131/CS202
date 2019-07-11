#include"bst.h"
using namespace std;
/*=================================
FILE: main.cpp
NAME: Jiacheng Zhao
ID NUMBER: 922943778
CS 202 Program 3
=================================*/

int main(){
    BST tree;
    cout<<"=========================================="<<endl;
    cout<<"THIS IS A FOOD SYSTEM"<<endl;

    BST bst;
    cout<<"Input the following code for the function"<<endl;
    cout<<"=========================================="<<endl;
    int input =0;
    do{
	cout<<"================================="<<endl;
	cout<<"[1] Add FOOD"<<endl;
	cout<<"[2] Display all FOOD"<<endl;
	cout<<"[3] Search FOOD and show info."<<endl;
	cout<<"[4] Change FOOD"<<endl;
	cout<<"[0] Exit."<<endl;

	cout<<"================================="<<endl;
	cin>>input;
	cin.ignore();
	switch(input)
	{
	    case 1:{
		    //===============================[1] Add Food
			char Name[50];
			char Sp[50];
			int flag=0;

			cout<<"Please Enter the NAME of Food: ";
			cin.get(Name,50,'\n');
			cin.ignore(100,'\n');
			cout<<"Please Enter COMMENT of Food: ";
			cin.get(Sp,50,'\n');
			cin.ignore(100,'\n');
			cout<<"[PLEASE CHOOSE THE TYPE OF FOOD 1 -or- 2 -or 3]"<<endl;
			cout<<"[1] MAIN FOOD"<<endl;
			cout<<"[2] DESERT"<<endl;
			cout<<"[3] BEVERAGES"<<endl;

			cin>>flag;
			cin.ignore();
			tree.add(Name,Sp,flag);

		       break;
		   }
	    case 2:{
		    //==================================[2] Display all FOOD
		       tree.display();
		       break;
		   }
	    case 3:{
		    //=============================[3] Search FOOD and show info."
		       char Name[50];
		       cout<<"Please enter the Name want be found: ";
		       cin.get(Name,50,'\n');
		       cin.ignore(100,'\n');
		       if(tree.search(Name))
			   cout<<" FIND "<<endl;
		       else
			   cout<<" NOT FIND! "<<endl;
		       break;
		   }
	    case 4:{
		    //============================[4] Change FOOD
		       char Name[50];
		       char nnn[50];
		       char Sp[50];
		       

		       cout<<"Please enter the NAME of food want be changed : ";
		       cin.get(Name,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter NEW NAME of food: ";
		       cin.get(nnn,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"Please enter NEW COMMENT of food: ";
		       cin.get(Sp,50,'\n');
		       cin.ignore(100,'\n');
		       if(tree.change(Name,nnn,Sp))
			   cout<<"FOOD HAS CHANGED"<<endl;
		       else
			   cout<<"NOT FIND!"<<endl;

		       break;
		   }
	    default:{
			if(input)
			    cout<<"invalit input"<<endl;
			break;
		    }
	}
    }while(input!=0);
    return 0;
}
