#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char name[50];
	cout<<"Enter your name:";
	cin.getline(name,50);
	cout<<"Your name is:"<<name;
	return 0;
}
