#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class transport
{
	public:
		float weight;
	string capacity;
	float    speed;
	virtual void ship(){
		
	};
	
	void load()
	{
	cout<<"Goods are loaded successfully";	
	}
	
	void unload()
	{
	cout<<"Goods are unloaded successfully";	
	}
	
};

class landtransport:public transport
{
	public:
	string	transportation_model;
     string	vechil_type;
	void ship()
	{
	cout<<"In load transport,shipping is done by a truck\n";
	cout<<"Enter transportation_model vechil_type"	;
	cin>>transportation_model>>vechil_type;
	cout<<"display\n"<<transportation_model<<vechil_type;
	}
};

class airtransport:public transport
{
	public:
		string aircraft_type;
		string airline_name;
	
	void ship()
	{
	cout<<"In air transport,shipping is done by a air cargo\n";
	cout<<"Enter aircraft_type airline_name";
	cin>> aircraft_type>>airline_name;
	cout<<"display\n"<<aircraft_type<<airline_name;
	}
};
int main(int argc, char** argv) 
{
	transport *ptr;
	landtransport obj;
	airtransport obj1;
	char choice;
	//choice:
	
	do{
	
	cout<<"Do you want transport Goods? Press Y for Yes And N for No"<<endl;
	cin>>choice;
	char ch;
	if (choice=='y' || choice=='Y')
	{
		cout<<"Press L or l to use landtransport services"<<endl;
		cout<<"Press A or a to use airtransport services"<<endl;
		cin>>ch;
		if(ch=='L' || ch=='l')
		{
			ptr=&obj;
			ptr->ship();		
		}
		else if(ch=='A' || ch=='a')
		{ptr=&obj1;
		ptr->ship();}
		else 
		cout<<"wrong input";
		
}}
	
	while(choice!='x');
			


	return 0;
}
