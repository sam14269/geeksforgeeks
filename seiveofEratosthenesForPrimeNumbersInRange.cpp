#include <bits/stdc++.h>
using namespace std;
void primes(int n)
{
    bool flag[n+1];
    int i;
    for(i=2;i<=n;i++)
        flag[i]=true;
    for(i=2;i*i<=n;i++)
    {
        if(flag[i]==true)
            for(int j=2*i;j<=n;j+=i)
                flag[j]=false;
    }
    for(i=2;i<=n;i++)
        if(flag[i])
            cout<<i<<" ";
}
int main(int argc, char **argv)
{
    int n;
    cin>>n;
    primes(n);
    return 0;
}
