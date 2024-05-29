#include <iostream>
using namespace std;
	
void segregatedElements(int num[],int n)
 {
	int result[n];
	int j=0;
for(int i=0;i<n;i++)
if(num[i]>=0)
result[j++]=num[i];
             if(j==n || j==0)
             return;
	for (int i=0;i<n;i++)
	if(num[i]<0)
	result[j++]=num[i];
	memcpy(num,result,sizeof(result));
}
	int main(){
	int num[10]={5,-8,8,-4,6,-1,7,-3,7,-2};
	int n= sizeof(num)/sizeof(num[0]);
	cout<<"Original array is:";
	for(int i=0;i<n;i++)
	cout<<num[i]<<" ";
	segregatedElements(num,n);
	cout<<"\nRearranged array is:";
	for (int i=0;i<n;i++)
	cout<<num[i]<<" ";
	return 0;
}

