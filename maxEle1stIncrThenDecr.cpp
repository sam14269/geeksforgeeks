#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1, 30, 40, 50, 60, 70, 23, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int tmp=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]< arr[i] && arr[i]>arr[i+1] && arr[i]>max)
            max=arr[i];
        else if(tmp> arr[i]&& tmp>max)
            max= tmp;
        else if(arr[n-1]> arr[n-1-i] && arr[n-1]>max)
            max=arr[n-1];
    }
 cout<<max;
    return 0;
}
