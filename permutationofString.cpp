#include <bits/stdc++.h>
using namespace std;
void swap(char *x,char *y)
{
    char temp=*x;
    *y=*x;
    *x=temp;
}
void permute(char *arr,int l,int r)
{
    if(l==r)
        cout<<arr<<endl;
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(arr[l],arr[i]);
            permute(arr,l+1,r);
            swap(arr[l],arr[i]);
        }
    }
}
int main(int argc, char **argv)
{
char str[]="ABC";
int n=strlen(str);
permute(str,0,n-1);
	return 0;
}
