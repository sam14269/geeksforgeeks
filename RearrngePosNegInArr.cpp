#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int tmp= *a;
    *a=*b;
    *b=tmp;
}
void rearrnge(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            j++;
            swap(&arr[j],&arr[i]);
        }
    }
    int positive_Index=j+1;
    int negitive_Index=0;
    while(positive_Index <n && negitive_Index < positive_Index && arr[negitive_Index]<0)
    {
        swap(&arr[positive_Index],&arr[negitive_Index]);
        positive_Index++;
        negitive_Index+=2;
    }
}
int main()
{
   int arr[]={-1, 2, -3, 4, -5, 6, -7, 8, 9,10,12,-15};
   int n=sizeof(arr)/sizeof(arr[0]);
   rearrnge(arr,n);
   for(int k=0;k<n;k++)
         cout<<arr[k]<<" ";
   return 0;
}
