#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int tmp= *a;
    *a=*b;
    *b=tmp;
}
void reverse(vector <int> &arr, int l, int r)
{
    if (l < r)
    {
        swap(arr[l], arr[r]);
        reverse(arr, ++l, --r);
    }
}
void merge(vector <int> &arr, int l, int m, int r)
{
    int i = l; 
    int j = m + 1;
    while (i <= m && arr[i] < 0)
        i++;
    while (j <= r && arr[j] < 0)
        j++;
    reverse(arr, i, m);
    reverse(arr, m + 1, j - 1);
    reverse(arr, i, j - 1);
}
void rearrange(vector <int> &arr, int l, int r)
{
    if (l < r)
    {
       int m = l + (r - l) / 2;
        rearrange(arr, l, m);
        rearrange(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void alag(vector<int> &v,int n)
{
    int i,j=0,k=0;
    int tmp;
    vector <int> pos,neg;
    for(i=0;i<n/2;i++)
        neg.push_back(v[i]);
    for(i=n/2;i<n;i++)
        pos.push_back(v[i]);
    int res[n];
    for(i=0;i<n;i+=2)
    {
        res[i]=pos[j++];
        res[i+1]=neg[k++];
    }
    for( i=0;i<n;i++)
        cout<<res[i]<<" ";
}
int main()
{
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
       vector <int> v;
       for(int i=0;i<n;i++)
            {
                int p;
                cin>>p;
                v.push_back(p);
            }
      rearrange(v,0,n-1);
      alag(v,n);
      cout<<endl;  
   }
   return 0;
}
