#include <bits/stdc++.h>
#define HASH 100
using namespace std;

int main()
{
    int arr[]={1, 2, 2, 2, 0, 2, 0, 2, 3, 8, 0, 9, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%k]+=k;   
    }
    int max=INT_MIN;
    int res;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            res=i;
        }
    }
    cout<<res;
    
return 0;
}
