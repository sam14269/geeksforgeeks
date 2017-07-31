#include <iostream>
using namespace std;
int rotcnt(int arr[],int low,int high)
{
    int mid= (low+high)/2;
    if(high<low)return 0;
    if(high == low)return low;
    if(mid<high && arr[mid+1]<arr[mid])return mid+1;
    if(mid>low && arr[mid]<arr[mid-1])return mid;
    if(arr[mid]>arr[high])
        return rotcnt(arr,mid+1,high);
    else 
    return rotcnt(arr,low,mid-1);
}
int main()
{
   int arr[]={7, 9, 11, 12, 5};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<rotcnt(arr,0,n-1);
    return 0;
}
