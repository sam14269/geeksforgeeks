#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
void inSpiral(int arr[][MAX],int R,int C)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(i%2==0)
                cout<<arr[i][j]<<" ";
            else 
                cout<<arr[i][C-j-1]<<" ";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int arr[MAX][MAX];
    int R,C;
    cin>>R>>C;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin>>arr[i][j];
    inSpiral(arr,R,C);
    }
    return 0;
}
