#include <bits/stdc++.h>
using namespace std;
int binar(int i)
{
    stack <int> s;
    string str;
    int cn=0;
            while(i)
                {
                        s.push(i%2);
                        i=i/2;
                }
            while(!s.empty())
                {
                        str+=s.top()+'0';
                        s.pop();
                }
            for(int j=0;j<str.size();j++)
                        if(str[j]==(1+'0'))
                            cn++;
    return cn;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
   int a;
   cin>>a;
   int cnt=0;
   for(int i=a;i>0;i--)
       cnt+=binar(i);
   cout<<cnt<<endl;
   }
   return 0;
}
