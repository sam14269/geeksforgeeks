#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={2, 3, 2, 4, 5, 12, 2, 3, 3, 3, 12};
   int n=sizeof(arr)/sizeof(arr[0]);
   map <int,int> m;
   multimap <int,int> multi;
   for(int i=0;i<n;i++)
      m[arr[i]]++;
   for(auto it=m.begin();it!=m.end();it++)
        multi.insert(make_pair(it->second,it->first));
   for(auto rt=multi.rbegin();rt!=multi.rend();rt++)
    {
        int cnt=rt->first;
        while(cnt--)
        {
            cout<<rt->second<<" ";
        }
    }
   return 0;
}
