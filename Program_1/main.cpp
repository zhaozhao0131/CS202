/*==========================
FILE: main.cpp
NAME: jiacheng Zhao
ID NUMBER: 922943778
CS202 Program1
==========================*/
#include"arr.h"

int main(){
    cout<<"=============================="<<endl;
    cout<<"THIS IS A LANE & CAR SYSTEM"<<endl;
    cout<<"=============================="<<endl<<endl;
    ARR lane;
    cout<<"<HERE IS SOME DATA LOADED IN LANE SYSTEM>"<<endl<<endl;

    char name1[] = "BMW";
    char name2[] = "1st BUS";
    char name3[] = "Lamborghini";
    int speed1 = 99;
    int speed2 = 45;
    int speed3 = 110;
    bool stop1 = false;
    bool stop2 = true;
    int lane1 = 1;
    int lane2 = 2;
    int lane3 = 3;
    int flag1 = 1;
    int flag2 = 2;
    int flag3 =3;
    lane.insert(name1,speed1,stop1,lane1,flag1);
    lane.insert(name2,speed2,stop2,lane2,flag2);
    lane.insert(name3,speed3,stop1,lane3,flag1);
    lane.display();

    cout<<endl;
    cout<<"***************************************************"<<endl;
    cout<<"          UNDER THIS IS CAR INFO SYSTEM"<<endl;
    cout<<"***************************************************"<<endl;
    LLL arr;

    cout<<"{--PLEASE INPUT THE FOLLOWING CODE FOR THE FUNCTION--}"<<endl<<endl;
    int input = 0;

    do
    {
	cout<<"======================================"<<endl;
	cout<<"[1] ADD NEW CAR"<<endl;
	cout<<"[2] DISPLAY ALL CAR INFO"<<endl;
	cout<<"[3] SEARCH CAR"<<endl;
	cout<<"[4] CHANGE SPEED OF CAR"<<endl;
	cout<<"[5] CHANGE MOVING CONDITION"<<endl;
	cout<<"[0] EXIT"<<endl;
	cout<<"======================================"<<endl;

	cin>>input;
	cin.ignore();
	switch(input)
	{
	    case 1:
		{
		    //=============add new car
		    cout<<"PLEASE ENTER ADD CAR IN WHICH LANE"<<endl;
		    cout<<"[1/2/3]"<<endl;
		    int lane = 0;
		    cin>>lane;
		    cin.ignore();
		    cout<<"CHOOSE THE TYPE OF CAR"<<endl;
		    cout<<"[1] SPORTCAR"<<endl;
		    cout<<"[2] BUS"<<endl;
		    cout<<"[3] TRUCK"<<endl;
		    int flag = 0;
		    cin>>flag;
		    cin.ignore();
		    cout<<"PLEASE ENTER THE NAME OF CAR"<<endl;
		    char name[50];
		    cin.get(name,50,'\n');
		    cin.ignore(100,'\n');
		    cout<<"PLEASE ENTER THE SPEED OF CAR"<<endl;
		    cout<<"-LIMIT SPEED-"<<endl;
		    cout<<"	Sportcar: 0~120"<<endl;
		    cout<<"	Bus: 0~60"<<endl;
		    cout<<"	Truck: 0~90"<<endl;
		    int speed = 0;
		    cin>>speed;
		    cin.ignore();
		    cout<<"PLEASE ENTER THE MOVING CONDITION"<<endl;
		    cout<<"[Y/N] MOVING/STOP"<<endl;
		    char m = 'n';
		    cin>>m;
		    cin.ignore(100,'\n');
		    bool stop = true;
		    if(m=='y'||m=='Y')
			stop = false;

		    arr.insert(name,speed,stop,lane,flag);
		    
		    break;
		}
	    case 2:
		{
		    //==============display all car information
		    arr.display();
		    break;
		}
	    case 3:
		{
		    //==============search car by name
		    cout<<"PLEASE ENTER THE NAME OF CAR FOR SEACHING"<<endl;
		    char Name[50];
		    cin.get(Name,50,'\n');
		    cin.ignore(100,'\n');

		    if(arr.compare(Name))
			    cout<<"IT IS IN LANE"<<endl;
			else
			    cout<<"NOT FIND!"<<endl;
		    break;
		}
	    case 4:
		{
		    //================change speed of car
		    cout<<"PLEASE ENTER THE NAME OF CAR FOR CHANGE SPEED"<<endl;
		    char Name[50];
		    cin.get(Name,50,'\n');
		    cin.ignore(100,'\n');
		    cout<<"ENTER NEW SPEED"<<endl;
		    int speed = 0;
		    cin>>speed;
		    cin.ignore();

		    arr.change_speed(Name,speed);
		    break;
		}
	    case 5:
		{
		    //================change moving condition of car
		    cout<<"PLEASE ENTER THE NAME OF CAR FOR CHANGE MOVING CONDITION"<<endl;
		    char Name[50];
		    cin.get(Name,50,'\n');
		    cin.ignore(100,'\n');
		    cout<<"ENTER THE MOVING CONDITION"<<endl;
		    cout<<"[Y/N] MOVING/STOP"<<endl;
		    char m = 'n';
		    cin>>m;
		    cin.ignore(100,'\n');
		    bool stop = true;
		    if(m=='y'||m=='Y')
			stop = false;

		    arr.change_stop(Name,stop);
		    break;
		}
	    default:{
			if(input)
			    cout<<"INVALID INPUT"<<endl;
			break;
		    }
	}
    }while(input!=0);


}
