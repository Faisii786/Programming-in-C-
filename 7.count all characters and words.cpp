#include <iostream>
using namespace std;
int main()
{
	int words=1,characters=0,i;
	char str[25];
	cout<<"Enter string:"<<endl;
	cin.getline(str,25);
	for (i=0;str[i]!=0;i++)
	{
	characters++;
	if (str[i]==' ')
	{
	words++;
	characters =characters-1;
	}
	}
	cout<<"Number of characters are:"<<characters<<endl;
	cout<<"Number of words are:"<<words;
	return 0;

}
