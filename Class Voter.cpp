#include <iostream>
using namespace std;
class voter
{
	private:
	double ID;
	char Name[10];
	char FName[15];
	string Age,province,name,Address;
	public:
		void add_voter();
		void display();
		void search_name();
		void exit();
};
	void voter::add_voter()
	{
	cout<<"Enter ID no:\t";
	cin>>ID;
	cout<<"Enter Name:\t";
	cin>>Name;
	cout<<"Enter FName:\t";
	cin>>FName;
	cout<<"Enter Age:\t";
	cin>>Age;
	cout<<"Enter Adddress:\t";
	cin>>Address;
	cout<<"Enter provience:";
	cin>>province;
	}
	void voter::display()
	{
		cout<<"\nThe detail of  voter is:\n";
		cout<<"\nName of Voter is:	\t"<<Name;
		cout<<"\nFName of Voter is:	\t"<<FName;
		cout<<"\nAge of voter is:    	\t"<<Age;
		cout<<"\nID of Voter is:	   	\t"<<ID;
		cout<<"\nAddress of Voter is:	\t"<<Address;
		cout<<"\nProvience of Voter is:	\t"<<province;

	}
	void voter::search_name()
	{
		char Name2[10];
		cout<<"Enter name to search:";
		cin>>Name2;
		if(Name[1]==Name2[1]&&Name[2]==Name2[2]&&Name[3]==Name2[3]||Name[4]==Name2[4]||Name[5]==Name2[5])
		{
		    cout<<endl<<"The detail of voter is: "<<endl;
			cout<<"The name of vorter is:	  	\t"<<Name<<endl;
			cout<<"The father name of vorter is:	\t"<<FName<<endl;
			cout<<"The ID of vorter is:		\t"<<ID<<endl;
			cout<<"The age of vorter is:		\t"<<Age<<endl;
			cout<<"The address of vorter is:  	\t"<<Address<<endl;
			cout<<"The province of vorter is: 	\t"<<province<<endl;
		}
		else
		{
		cout<<"There is no voter in this list: "<<endl;
		}
	}
	void voter::exit()
	{
		cout<<"Exit"<<endl;
	}
	int main()
	{
 	voter obj;
	int a;
	cout<<"Assalam O Alaikum \n1->Add Voter \t2->Exit  \nPress 1 and Enter the voter details:\n";
	cin>>a;
	if(a==1)
	{
	obj.add_voter();
	int n;
	cout<<"\nEnter the number that you want:\n 1->Add voter\t 2-> Search voter\t 3->Display list \t4->Exit\n";
	cin>>n;
	if(n==1)
	{
	obj.display();
	}
	else
	if(n==2)
	{
	obj.search_name();
	}
	else 
	if(n==3)
	{
	obj.exit();
	}
	else 
	{
	cout<<"Wrong Input";
	}
}
	return 0;
}

