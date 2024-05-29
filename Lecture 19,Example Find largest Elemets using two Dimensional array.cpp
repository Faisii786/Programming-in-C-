#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int mat[4][4]={ {1,2,3,4},{25,6,7,8},{9,10,11,12},{13,14,15,16} };
	int maxElemet=mat[0][0];
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			if(mat[i][j]>maxElemet)
			{
				maxElemet=mat[i][j];
			}
		}
	}
	cout<<"Largest elelemt of Array:"<<maxElemet;
	return 0;
}
