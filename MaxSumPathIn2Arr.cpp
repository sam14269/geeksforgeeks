#include <bits/stdc++.h>
#define HASH 100
using namespace std;

int main()
{
    int arr1[]={2, 3, 7, 10, 12};
    int arr2[]={1, 5, 7, 8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int sum1=0,sum2=0;
    int res=0;
    int j=0,i=0;
    while(i>=0 &&i<n1 &&j>=0&&j<n2)
    {
        if(arr1[i]<arr2[j])
            sum1+=arr1[i++];
        else if(arr1[i]>arr2[j])
            sum2+=arr2[j++];
        else
            {
                res+=(sum1>sum2)?sum1:sum2;
                sum1=0;
                sum2=0;
                while(i<n1&&j<n2&&arr1[i]==arr2[j])
                {
                    res+=arr1[i++];
                    j++;
                }
            }
    }
       while(i<n1)
            sum1+=arr1[i++];
       while(j<n2)
             sum2+=arr2[j++];
    res+=(sum1>sum2)?sum1:sum2;

cout<<res;
return 0;
}
