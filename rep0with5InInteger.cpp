#include <bits/stdc++.h>
using namespace std;
int rep(int n)
{
    int i;
    string s=to_string(n);
   for(i=0;i<s.length();i++)
        if(s[i]=='0')
             s[i]='5';
   return stoi(s);
}
int main()
{
   int n,t;
   cin>>t;
   while(t--){
   cin>>n;
   cout<<rep(n)<<endl;
   }
   return 0;
}
