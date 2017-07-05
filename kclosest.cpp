#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int binary(vector <int> arr,int l,int r,int x)
{
    
    if (r >= l)
    {
    int mid=l+(r-l)/2;
    if(arr[mid]==x)
        return mid;
    if(arr[mid]>x)
        return binary(arr,l,mid-1,x);
    return binary(arr,mid+1,r,x);
    }
    return -1;
}
void getelements(vector<int> arr,int k,int index,int x,int n)
{
    int next=index+1;
    int cnt=0;
    if(arr[index==x])
        index--;
    while(index>=0&&next<n&&cnt<k)
    {
        if(x-arr[index]<arr[next]-x)
            cout<<arr[index--]<<" ";
        else
            cout<<arr[next++]<<" ";
        cnt++;
    }
    while(cnt<k&&index>=0)
    {
        cout<<arr[index--]<<" ";
        cnt++;
    }
     while(cnt<k&&next<n)
    {
        cout<<arr[next++]<<" ";
        cnt++;
    } 
}
int main()
{
int n,x,p,k;
vector <int> arr;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>p;
    arr.push_back(p);
}
cout<<"NUmber";
cin>>x;
cout<<"K=";
cin>>k;
int index=binary(arr,0,n-1,x);
getelements(arr,k,index,x,n);
return 0;
}
