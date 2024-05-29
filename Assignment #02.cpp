#include<iostream>
#include<conio.h>
using namespace std;

class account
{
	protected:
		double balance;
	public:
		account(double initial_balance)
		{
			if(initial_balance>=0.0)
			{
				balance=initial_balance;
			}
			else
			{
				balance=0.0;
				cout<<"Error message:Initial balance was invalid\n";
			}
		}
		void credit()
		{
			int current_b,withdraw,total_b;
			current_b=balance;
			cout<<"Add the amount you want to desposit\n";
			cin>>current_b;
			total_b=balance+current_b;
			balance=total_b;
		}
		void debit()
		{
			int withdraw,remaining_b,total_b;
			cin>>withdraw;
			if(withdraw >= total_b)
			{
				remaining_b=balance-withdraw;
				balance=remaining_b;
			}
			else
			{
				cout<<"you exceeded the limit balance\n";
				balance=total_b;
			}
		}
		int get_balance()
		{
			return balance;
		}
};

	class saving_account:public account
	{
		protected:
			int interest,rate,initial_balance,t;
		public:
			saving_account(int a,int b,int c,int d,int g):account(g)
			{
				interest=a;
				rate=b;
				balance=c;
				t=d;
			}
			int calculate_interest()
			{
				
				cout<<"How many years:\n";
				cin>>t;
				interest=initial_balance*(1+rate)*t;
				return interest;
			}
	};
	
	class checking_account:public account
	{
		protected:
			double fee;
		public:
			checking_account(double sfee,int a,int b,int c,int d,int e,int g):account(g)
			{
				fee=sfee;
			}	
	};
	
	int main()
	{
		double Ramount,Qrate,c,d,fee;
		double n,m,o,p,q;
		int B;
		
		cout<<"Enter the initial amount and interest rate:\n";
		cin>>Ramount>>Qrate;
		
		saving_account Z(Ramount,Qrate,n,m,o);
		cout<<"Enter number years gone by:\n";
		cin>>B;
		cout<<"Total interest is\n"<<Z.calculate_interest();
		cout<<"\nPlease enter amount to be credited:\n";
		cin>>c;
		Z.credit();
		
		cout<<"Please enter amount to be debited:\n";
		Z.debit();
		cout<<"Current balance is"<<Z.get_balance()<<endl;
		cout<<"Enter fee per transaction:"<<endl;
		cin>>fee;
		
		checking_account C(Ramount,fee,m,n,o,p,q);
		cout<<"Charges per transaction:"<<fee;
		return 0;
	}	
