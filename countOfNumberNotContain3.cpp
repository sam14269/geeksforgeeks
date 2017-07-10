#include <bits/stdc++.h>
using namespace std;
int count(int n)
{   static int cnt=0;
    if(n<3)
        return cnt;
    int i=n;
    while(i)
        {
        int ones=i%10;
        if(ones==3)
            {
                ++cnt;
                break;
            }
        i=i/10;
        }
    return count(n-1);
}
int main(int argc, char **argv)
{
int n;
cin>>n;
cout<<n-count(n);
return 0;
}
