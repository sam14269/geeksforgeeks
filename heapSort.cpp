#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
int tmp= *a;
*a= *b;
*b=tmp;
}
void heapify(int arr[],int n,int i)
{
	int root=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n&& arr[l]>arr[root])
		root=l;
	if(r<n&& arr[r]>arr[root])
		root=r;
	if(root!=i)
	{
		swap(&arr[i],&arr[root]);
		heapify(arr,n,root);
	}
}
void heapsort(int arr[],int n)
{
for(int i=n/2-1;i>=0;i--)
	heapify(arr,n,i);
for(int j=n-1;j>=0;j--)
	{swap(&arr[0],&arr[j]);
	heapify(arr,j,0);}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main() {
	int arr[]={10, 80, 30, 90, 40, 50, 70};
	int n=sizeof(arr)/sizeof(arr[0]);
	heapsort(arr,n);
	print(arr,n);
	return 0;
}
