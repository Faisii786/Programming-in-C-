#include <iostream>
using namespace std;
class date
{
	int days, month, year;
	public:
	void set()
	{
		int d,m,y;
		year:
			cout<<"Enter year"<<endl;
			cin>>y;
			if(y>=1990)
			{
				year=y;
			}
			else
			{
				cout<<"Wrong input,Enter again"<<endl;
				goto year;
			}
			month:
				cout<<"Enter month(1-12)"<<endl;
				cin>>m;
				if(m>=1&&m<=12)
				{
					month=m;
				}
				else
				{
					cout<<"Wrong input, please enter again"<<endl;
					goto month;
				}
				days:
					cout<<"Enter Days(1-31)"<<endl;
					cin>>d;
					if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
					{
					if(d>=1&&d<=31)
					{
						days=d;
						}
						else
						{
							cout<<"Wrong input, please enter again"<<endl;
							goto days;
						}
					}
					if(m==4||m==6||m==9||m==11)
						{
						if(d>=1&&d<=30)
						{
							days=d;
						}
						else
						{
							cout<<"Wrong input, please enter again"<<endl;
							goto days;
						}
					}
					if(m==2&&y%4==0)
						{
							if(d>=1&&d<=29)
							{
								days=d;
							}
						 else
						 {
							cout<<"Wrong input, please enter again"<<endl;
							goto days;
						 }
						}
						 if(m==2&&y%4==1)
						{
							if(d>=1&&d<=28)
							{
								days=d;
							}
						 else
						 {
							cout<<"Wrong input, please enter again"<<endl;
							goto days;
						}
					}
	}
	
		void display()
		{
			cout<<"Given date is "<<endl;
			cout<<days<<"/"<<month<<"/"<<year<<endl;
			}	
			void operator+(int one)
			{
				if(month==1||month==3||month==5||month==7||month==8||month==10||month==12&&days>=1&&days<=30)
				{
					days=days+1;
				}
				else if(month==1||month==3||month==5||month==7||month==8||month==10&&days==31)
				{
					month=month+1;
					days=1;
				}
				else if(month==4||month==6||month==9||month==11&&days>=1&&days<=29)
				{
					days=days+1;
				}
				else if(month==4||month==6||month==9||month==11&&days==30)
				{
					month=month+1;
					days=1;
				}
				else if(month==2&&year%4==0&&days>=1&&days<=28)
				{
					days=days+1;
				}
				else if(month==2&&year%4==0&&days==29)
				{
					month=month+1;
					days=1;
				}
				else if(month==2&&year%4==1&&days>=1&&days<=27)
				{
					days=days+1;
				}
				else if(month==2&&year%4==1&&days==28)
				{
					month=month+1;
					days=1;
				}
				else if(month==12&&days==31)
				{
					year=year+1;
					month=1;
					days=1;
				}
				else
				{
					days=days;
					month=month;
					year=year;
				}
			}
			void show()
			{
				cout<<"Increased date is ";
				cout<<days<<"/"<<month<<"/"<<year;
			}
};
int main(int argc, char** argv) {
	date d;
	d.set();
	d.display();
	d+1;
	d.show();
	return 0;
}

