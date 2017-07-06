#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
vector <int> a,b,c;
int na,nb,nc,i,j,k;
cin>>na>>nb>>nc;
for(i=0;i<na;i++)
{
    int p;
    cin>>p;
    a.push_back(p);
}
for(i=0;i<nb;i++)
{
    int q;
    cin>>q;
    b.push_back(q);
}
for(i=0;i<nc;i++)
{
    int r;
    cin>>r;
    c.push_back(r);
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
sort(c.begin(),c.end());
for(i=0;i<na;i++)
{
    if(binary_search(b.begin(),b.end(),a[i])&&binary_search(c.begin(),c.end(),a[i]))
        cout<<a[i]<<" ";
}
	return 0;
}
