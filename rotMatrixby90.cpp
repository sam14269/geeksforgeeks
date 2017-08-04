#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int arr[4][4] = { {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}   
};
    int n=4;
    
     for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
           }
    cout<<endl;
    for(int i = 0; i < n/2; ++i)
        for(int j = 0; j < (n+1)/2; ++j)
            {
                int tmp=arr[i][j];
                arr[i][j]=arr[n-j-1][i];
                arr[n-j-1][i]=arr[n-i-1][n-j-1];
                arr[n-i-1][n-j-1]=arr[j][n-i-1];
                arr[j][n-i-1]=tmp;
                
            }

            
    for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
           }
return 0;
}
