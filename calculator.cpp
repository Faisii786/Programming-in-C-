#include<iostream>
using namespace std;

/* Hey! My name is Faisal Aslam
 I create calculator using C++
 This Calculator perform '+','-','*','/' operations
*/ 

int main()
{
	cout<<"\t\t\t\t\t\t\tCalculator"<<endl;
	cout<<"Wellcome!"<<endl;
    int num1;
    int num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    char choice;
    cout<<"Enter the operator : ";
    cin>>choice;
    if(choice=='+')
    {
    	int temp;
    	temp=num1+num2;
    	cout<<endl;
    	cout<<num1<<" + "<<num2<<" = "<<temp;
	}
	
	else if(choice=='-')
    {
    	int temp;
    	temp=num1-num2;
    	cout<<num1<<" - "<<num2<<" = "<<temp;
	}
	
	else if(choice=='*')
    {
    	int temp;
    	temp=num1*num2;
    	cout<<num1<<" * "<<num2<<" = "<<temp;
	}
	
	else if(choice=='/')
    {
    	int temp;
    	temp=num1/num2;
    	cout<<num1<<" / "<<num2<<" = "<<temp;
	}
	
	else
	{
		cout<<endl;
		cout<<"You Enter Invalid operator :"<<endl;
		cout<<"Please Enter '+' or '-' or '*' or '/'";
		cout<<endl;
	}

    return 0;
}
