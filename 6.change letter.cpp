#include <iostream>
#include <string>
using namespace std;
string change_letter(string str)
{
	int char_code;
	for(int z=0; z<str.length(); z++)
	{
		char_code=int (str[z]);
		if(char_code==150)
		{
			str[z]=char(100);
		}
		else if(char_code==90)
		{
			str[z]=char(65);
		}
		else if(char_code >=65 && char_code <=90)
		{
			str[z]=char(char_code+1);
		}
	}
	return str;
}
int main() {
	cout<<"Original string: FAISAL ASLAM"<<endl;
	cout<<"New string: "<<change_letter("FAISAL ASLAM");
	return 0;
}

