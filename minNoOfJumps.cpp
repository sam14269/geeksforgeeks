
//////Time Complexity is O(n^2) in the worst case

#include <bits/stdc++.h>
using namespace std;

int min(int x,int y)
{
    return (x<y)?x:y;
}
int main()
{
    int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int dp[n];
    dp[0]=0;
    int i,j;
    for(i=1;i<n;i++)
        dp[i]=INT_MAX;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<=arr[i]&&i+j<n;j++)
            dp[i+j]=min(dp[i+j],1+dp[i]);
    }
    cout<<dp[n-1];
return 0;
}
