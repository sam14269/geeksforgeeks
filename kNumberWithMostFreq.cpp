#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={7, 10, 11, 5, 2, 5, 5, 7, 11, 8, 9};
   int n=sizeof(arr)/sizeof(arr[0]);
   int k=4,i;
   map <int,int> m;
   for(i=0;i<n;i++)
        m[arr[i]]++;
    multimap <int,int> mu;
    for(auto mt=m.begin();mt!=m.end();mt++)
        mu.insert(make_pair(mt->second,mt->first));
    auto oi=mu.rbegin();
    while(k--)
    {   
        cout<<oi->second<<" ";
        oi++;
    }
    return 0;
}
