#include <iostream>
using namespace std;
class Tic_Tac_Toe
{
char Z[3][3];
public:
Tic_Tac_Toe()
{
	Z[0][0]='1';
	Z[0][1]='1';
	Z[0][2]='1';
	Z[1][0]='1';
	Z[1][1]='1';
	Z[1][2]='1';
	Z[2][0]='1';
	Z[2][1]='1';
	Z[2][2]='1';
}
void Format()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<Z[i][j];
			if(j<=1)
			cout<<" |";
			else
			cout<<"\n";
			if(j==2&&i<2)
			cout<<"___________"<<"\n";
		}
	}
}
void Game(int p)
{
	int num,temp=0;
	char ch;
	if(p==1||p==3||p==5||p==7||p==9)
	{
		cout<<"Player 1 your turn"<<endl;
		ch='x';
	}
	else
	{
		cout<<"Player 2 now your turn"<<endl;
		ch='O';
	}
	cout<<"Enter the box number:";
	do{
		if(temp==1)
		cout<<"Again enter number:";
		while(!(cin>>num))
		{
		cout<<"wrong input, Please enter again";	
		}
		if(num<0 || num>9)
		temp=1;
		switch(num)
		{
			case 1:
				if(Z[0][0]=='x'|| Z[0][0]=='O')
				temp=1;
				else
				{
					Z[0][0]=ch;
					temp=0;
				}
				break;
				 case 2:
				     if(Z[0][1]=='x'|| Z[0][1]=='O')
				      temp=1;
				     else
			     	{
				     Z[0][1]=ch;
					 temp=0;
				     }
				     break;
				     case 3:
				         if(Z[0][2]=='x'|| Z[0][2]=='O')
				         temp=1;
				         else
				         {
					     Z[0][2]=ch;
					     temp=0;
				         }
				         break;
				         case 4:
				             if(Z[1][0]=='x'|| Z[1][0]=='O')
				             temp=1;
				              else
				             {
				     	     Z[1][0]=ch;
					          temp=0;
				             }
				             break;
				             case 5:
			          	         if(Z[1][1]=='x'||Z[1][1]=='O')
				                 temp=1;
				                 else
				                 {
					              Z[1][1]=ch;
					             temp=0;
				                 }
				                 break;
				                 case 6:
				                     if(Z[1][2]=='x'|| Z[1][2]=='O')
				                     temp=1;
				                     else
				                     {
					                 Z[1][2]=ch;
					                 temp=0;
				                     }
				                      break;
				                     case 7:
				                          if(Z[2][0]=='x'|| Z[2][0]=='O')
			 	                         temp=1;
				                         else
				                         {
					                     Z[2][0]=ch;
					                     temp=0;
			            	             }
			                              break;
				                           case 8:
				                               if(Z[2][1]=='x'|| Z[2][1]=='O')
				                                temp=1;
				                                else
				                              {
					                          Z[2][1]=ch;
					                         temp=0;
				                             }
				                             break;
				                              case 9:
				                                  if(Z[2][2]=='x'|| Z[2][2]=='O')
				                                 temp=1;
				                                 else
				                                 {
					                              Z[2][2]=ch;
					                             temp=0;
				                                    }
				                                  break;
		}
	}
	while(temp!=0);
		Format();
	}
bool check()
{
	if(Z[0][0]=='x'&&Z[0][1]=='x'&&Z[0][2]=='x'||Z[1][0]=='x'&&Z[1][1]=='x'&&Z[1][2]=='x'||Z[2][0]=='x'&&Z[2][1]=='x'&&Z[2][2]=='x'||Z[0][0]=='x'&&Z[1][0]=='x'&&Z[2][0]=='x'||Z[0][1]=='x'&&Z[1][1]=='x'&&Z[2][1]=='x'||Z[0][2]=='x'&&Z[1][2]=='x'&&Z[2][2]=='x'||Z[0][2]=='x'&&Z[1][1]=='x'&&Z[2][0]=='x'||Z[0][0]=='x'&&Z[1][1]=='x'&&Z[2][2]=='x')
	{
	cout<<"Player 1 Wins"<<"\n";
	return 1;
}
	else if(Z[0][0]=='O'&&Z[0][1]=='O'&&Z[0][2]=='O'||Z[1][0]=='O'&&Z[1][1]=='O'&&Z[1][2]=='O'||Z[2][0]=='O'&&Z[2][1]=='O'&&Z[2][2]=='O'||Z[0][0]=='O'&&Z[1][0]=='O'&&Z[2][0]=='O'||Z[0][1]=='O'&&Z[1][1]=='O'&&Z[2][1]=='O'||Z[0][2]=='O'&&Z[1][2]=='O'&&Z[2][2]=='O'||Z[0][2]=='O'&&Z[1][1]=='O'&&Z[2][0]=='O'||Z[0][0]=='O'&&Z[1][1]=='O'&&Z[2][2]=='O')
	cout<<"Player 2 Wins"<<"\n";
	else
	return 0;
}	
};

int main()
 {
	cout<<"\tTic_Tac_Toe"<<"\n";
	cout<<"Player 1=> x\t\t Player 2=> O"<<endl;
	Tic_Tac_Toe T;
	T.Format();
	for(int i=1;i<=9;i++)
	{
		T.Game(i);
		if(T.check())
		break;
		if(i+1==10)
		{
		cout<<"Draw";
		break;
	}
	i++;
	T.Game(i);
	if(T.check())
	break;
	if(i+1==10)
	{
		cout<<"Draw";
	}
	}
	return 0;
}
