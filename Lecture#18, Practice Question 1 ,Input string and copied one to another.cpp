#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	char str1[50],str2[50];
	cout<<"Enter a string:";
	cin.getline(str1,50);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	cout<<"Copied elemets in another string are:"<<str2;
	return 0;
}
