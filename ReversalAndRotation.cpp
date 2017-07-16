#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
cout<<endl;
}
void reverse(int arr[],int l,int r)
{
	while(l<=r)
		{
			swap(&arr[l],&arr[r]);
			l++;
			r--;
		}
}

void rotate(int arr[],int d,int n )
{
	print(arr,n);
	reverse(arr,0,d-1);
	print(arr,n);
	reverse(arr,d,n-1);
	print(arr,n);
	reverse(arr,0,n-1);
	print(arr,n);
	
}
int main() {
	int arr[]={1, 2, 3, 4, 5, 6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	//reverse(arr,0,n-1);
	rotate(arr,3,n);
	return 0;
}
