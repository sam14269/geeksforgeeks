#include <bits/stdc++.h>
#define MAX 1000
#define R 4
#define C 4
using namespace std;

void inSpiral(int arr[R][C],int p,int q)
{
    int i=0;
    int j=0;
    while(i<p&&j<q)
    {
        for(int s=i;s<q;s++)
            cout<<arr[i][s]<<" ";
        i++;
        for(int s=i;s<p;s++)
            cout<<arr[s][q-1]<<" ";
        q--;
        if(i<p)
            for(int s=q-1;s>=j;s--)
                cout<<arr[p-1][s]<<" ";
            p--;
        
        if(j<q)
            for(int s=p-1;s>=i;s--)
                cout<<arr[s][j]<<" ";
            j++;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int arr[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin>>arr[i][j];
    inSpiral(arr,R,C);
    cout<<endl;
    }
    return 0;
}
