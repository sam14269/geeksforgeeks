#include <bits/stdc++.h>
int hash=2;
using namespace std;
int main(int argc, char **argv)
{
    //vector <int> ab;
    //int n,i;
    bool ab[] = {1, 1, 1, 1, 0, 0, 0};
    int n = sizeof(ab)/sizeof(ab[0]);
    int cnt[hash],i;
    for(i=0;i<hash;i++)
        cnt[i]=0;
    //cin>>n;
    /*for(i=0;i<n;i++)
    {
    int p;
    cin>>p;
    ab.push_back(p);
    }*/
    for(i=0;i<n;i++)
        cnt[(ab[i]%n)]++;
    cout<<cnt[1]<<" ";    
    return 0;
}
