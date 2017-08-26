#include <bits/stdc++.h>
using namespace std;
void rot(vector <int> &v, int size) {
    int temp = v[size-1], tmp1;
       for (int i = 0; i < size; i++) { 
          tmp1 = v[i];
          v[i] = temp;
          temp = tmp1;
     }
}
int main()
{
   int n,i;
   int cnt=0;
   cin>>n;
   vector<int> v;
   for(i=0;i<n;i++)
       {int p;cin>>p;v.push_back(p);}
    
  while(v.size()!=1)
   {
       rot(v,v.size());
       cnt++;
       int s=v.size();
       if(s-cnt > 0)
                v.erase(v.end()-cnt);
        else
            v.erase(v.begin());
   }
   for(i=0;i<v.size();i++)
     cout<<v[i];
   return 0;
}
