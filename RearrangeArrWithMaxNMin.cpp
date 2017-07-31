#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int tmp=*a;
    *a= *b;
    *b= tmp;
    
}
int main()
{
   int arr[]={1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ,12,13,14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28 ,29 ,30 ,31, 32};
   int n=sizeof(arr)/sizeof(arr[0]);
//-------------------------With Aux Array or Extra Space ----------------------------------
   /*int i=0;
   int j=n-1;
   int k=0;
   int tmp[n];
   while(i<=j && k<=n)
   {
        tmp[k]=arr[j];
        tmp[k+1]=arr[i];
        k+=2;
        j--;
        i++;
   }
   for(int k=0;k<n;k++)
    cout<<tmp[k]<<" ";
    */
//------------------------Without Extra Space ---------------------------------------------
    int min=arr[0];
    int max=arr[n-1];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            arr[i]=max-i/2;
        else
            arr[i]=min+i/2;
    }
    for(int k=0;k<n;k++)
        cout<<arr[k]<<" ";
   return 0;
}
