#include <bits/stdc++.h>
using namespace std;
void getSmall(int arr[],int n)
{
int min	=arr[0];
int smin=INT_MAX;
for(int i=1;i<n;i++)
{
	if(arr[i]<min)
		{
			smin=min;
			min=arr[i];
		}
	else if(arr[i]<smin && arr[i]!=min)
		smin=arr[i];
}
cout<<"First Smallest= "<<min<<endl;
cout<<"Second Smallest= "<<smin<<endl;
}
int main() {
int arr[]={1, 10, 2, 4, 5,6,4,12};
int n=sizeof(arr)/sizeof(arr[0]);
getSmall(arr,n);

	return 0;
}
