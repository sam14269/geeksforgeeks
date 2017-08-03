#include <bits/stdc++.h>
#define HASH 100
using namespace std;

int main()
{
    int arr1[]={1, 4, 5, 7};
    int arr2[]={10, 20, 30, 40};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int j=n2-1,i=0;
    int diff=INT_MAX;
    int x=32;
    int indarr1,indarr2;
    while(i<n1 && j>=0)
    {
       if(abs(x-(arr1[i]+arr2[j])) <diff )
          {
              diff=abs(x-(arr1[i]+arr2[j]));
              indarr1=i;
              indarr2=j;
          }
       if(arr1[i]+arr2[j]<x)
           i++;
       else j--;
       
    }
    cout<<arr1[indarr1]<<" "<<arr2[indarr2]<<endl;
    
return 0;
}
