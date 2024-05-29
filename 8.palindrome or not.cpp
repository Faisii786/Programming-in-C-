#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char str[20];
	int length,i,flag=0;
	cout<<"Enter string : "<<endl;
	cin>>str;
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-1-i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"String is Palindrome"<<endl;
	}
	else
	{
		cout<<"String is not Palindrome"<<endl;
	}
	return 0;
}
