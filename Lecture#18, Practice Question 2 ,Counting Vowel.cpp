#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i=0,count=0;
	char vowels[50];
	cout<<"Enter a string:";
	cin.getline(vowels,50);
	while(vowels[i]!='\0')
	{
		switch(vowels[i])
		{
			case 'A':
			count++;
			break;
			case 'E':
			count++;
			break;
			case 'I':
			count++;
			break;
			case 'O':
			count++;
			break;
			case 'U':
			count++;
			break;
			case 'a':
			count++;
			break;
			case 'e':
			count++;
			break;
			case 'i':
			count++;
			break;
			case 'o':
			count++;
			break;
			case 'u':
			count++;
			break;
			
		}
		i++;
	}
	cout<<"Numbers of vowels in the string are:"<<count;

	return 0;
}
