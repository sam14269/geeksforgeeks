#include <bits/stdc++.h>
using namespace std;
string binar(int n)
{
    stack <int> s;
    string str;
    while(n)
    {
      s.push(n%2);
      n=n/2;
    }
    while(!s.empty())
    {
        str+=s.top()+'0';
        s.pop();
    }
    return str;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    string st;
    st=binar(a^b);
    for(int i=0;i<st.size();i++)
    {
        if(st[i]==(1+'0'))
            {
                cnt++;
            }
    }
    cout<<cnt;
    return 0;
}
