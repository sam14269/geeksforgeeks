#include <iostream>
using namespace std;
int mer(int arr[],int temparr[],int l,int r);
int merge(int arr[],int temparr[],int l,int mid,int r)
{
	int cnt=0;
	int i=l;
	int j=mid;
	int k=l;
	while(i<=mid-1 && j<=r)
	{
		if(arr[i]<=arr[j])
			temparr[k++]=arr[i++];
		else 
			{
				temparr[k++]=arr[j++];
				cnt=cnt+(mid-i);
			}
	}
	while(i<=mid-1)
	{
		temparr[k++]=arr[i++];
	}
	while(j<=r)
	{
		temparr[k++]=arr[j++];
	}
	for(i=l;i<=r;i++)
		arr[i]=temparr[i];
	return cnt;
}
int mergesort(int arr[],int n)
{
	int *temparr=(int *)malloc(sizeof(int) *n);
	return mer(arr,temparr,0,n-1);
}
int mer(int arr[],int temparr[],int l,int r)
{
	int mid,invcnt=0;
	if(r>l)
	{
		mid=(l+r)/2;
		invcnt=mer(arr,temparr,l,mid);
		invcnt+=mer(arr,temparr,mid+1,r);
		invcnt+=merge(arr,temparr,l,mid+1,r);
	}
	return invcnt;
}
int main() {
int arr[]={1, 10, 2, 4, 5,6,4,12};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"count of inversions are"<<mergesort(arr,n);

	return 0;
}
