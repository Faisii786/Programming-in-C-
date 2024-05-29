#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char str[50];
	int count=0;
	int i=0;
	cout<<"Enter a String:"<<endl;
	cin.getline(str,50);
	while(str[i]!='\0')
	{
		count=count+1;
		i++;
	}
	cout<<"The lenght of string is:"<<count;
	return 0;
}
