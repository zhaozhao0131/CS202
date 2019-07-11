#include"node.h"
/*=====================
FILE: main.cpp
NAME: JIACHENG ZHAO
ID NUMBER: 922943778
CS 202 PROGRAM2
======================*/
using namespace std;
int main()
{
    cout<<"================================="<<endl;
    cout<<"    	     WELCOME!"<<endl;
    cout<<"  THIS IS RENT TRANSPORT SYSTEM"<<endl;
    cout<<"================================="<<endl;
    DLL dll;
    cout<<"Input The Following Code For The Function"<<endl;
    int input = 0;
    do{
	cout<<"=================================="<<endl;
	cout<<"[1] ADD NEW TRANSPORT IN LIST"<<endl;
	cout<<"[2] DIPSLAY ALL LIST"<<endl;
	cout<<"[3] DIPSLAY TOTAL COST"<<endl;
	cout<<"[4] SEARCH TRANSPORT BY ID NUMBER"<<endl;
	cout<<"[0] EXIT"<<endl;
	cout<<"=================================="<<endl;
	cin>>input;
	cin.ignore();
	switch(input)
	{
	    case 1:{
		       //-------------ADD NEW TRANSPORT IN LIST----------------------------
		       cout<<"CHOOSE THE TYPE OF TRANSPORT"<<endl;
		       cout<<"[1] Scooter"<<endl;
		       cout<<"[2] Zipcar"<<endl;
		       cout<<"[3] Rent Company"<<endl;
		       int flag =0;
		       cin>>flag;
		       cin.ignore();
		       cout<<"ENTER Closest Place: ";
		       char close[50];
		       cin.get(close,50,'\n');
		       cin.ignore(100,'\n');
		       cout<<"ENTER ID number: ";
		       int id;
		       cin>>id;
		       cin.ignore();
		       cout<<"ENTER the Cost: ";
		       int cost;
		       cin>>cost;
		       cin.ignore(); 
		       cout<<"ENTER IF IT IS Available"<<endl;
		       cout<<"[Y/N] AVAILABLE/NOT: ";
		       char m = 'n';
		       cin>>m;
                       cin.ignore(100,'\n');
                       bool check = false;
                        if(m=='y'||m=='Y')
                            check = true;
		       cout<<"ENTER IF IT NEED Repair"<<endl;
		       cout<<"[Y/N] NEED REPAIR/NOT: ";
		       char s = 'n';
                       cin>>s;
                       cin.ignore(100,'\n');
                       bool repair = false;
                        if(s=='y'||s=='Y')
                            repair = true;
		       if(flag ==1)
		       {
			    cout<<"ENTER HOW MANY Battery NOW: ";
			    int bar;
			    cin>>bar;
			    cin.ignore();
			    dll.insert(close,id,cost,check,repair,bar);
		       }
		       if(flag==2)
		       {
			   cout<<"ENTER HOW MANY Gas NOW: ";
			   int gas;
			   cin>>gas;
			   cin.ignore();
			   dll.Insert(close,id,cost,check,repair,gas);
		       }
		       if(flag==3)
		       {
			    dll.insert(close,id,cost,check,repair);
		       }
		       break;
		   }
	    case 2:{
		       //------------DISPLAY ALL IN LIST-----------------------------
		       cout<<"[---ALL LIST BELOW---]"<<endl;
			dll.display();
		       break;
		   }
	    case 3:{
		       //------------DISPLAY TOTAL COST-----------------------------
		       cout<<"[---THE TOTAL COST LIST BELOW---]"<<endl;
		       cout<<"TOTAL: $"<<dll.display_cost()<<endl;
		       break;
		   }
	    case 4:{
		       //------------SEARCH BY IN NUMBER-----------------------------
		        cout<<"ENTER [ID NUMBER] TO FIND: ";
			int key;
			cin>>key;
                        cin.ignore();

			if(dll.find(key))
				cout<<"[FIND] INFO. LIST ABVOE"<<endl;
			    else
				cout<<"!!NOT FIND IN THE LIST!!"<<endl;
		       break;
		   }

	    default:{
			if(input)
			    cout<<"Invalid Input"<<endl;
			break;
		    }
	}
    }while(input!=0);
}
