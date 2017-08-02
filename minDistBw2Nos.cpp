#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2, 5, 3, 5, 4, 4, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v(arr,arr+n);
    int x;
    int y;
    cin>>x>>y;
    int xt,yt;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
     if(arr[i]==x || arr[i]==y)
            {
                xt=i;
                break;
            }
    }
    for(int j=xt+1;j<n;j++)
    {
        if((arr[j]==x || arr[j]==y) && arr[j]!=arr[xt]&& j-xt < min)
            {
                min=j-xt;
                xt=j;
            }
        else xt=j;
        
    }
    cout<<min;
    return 0;
}
