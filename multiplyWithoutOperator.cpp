#include <bits/stdc++.h>
using namespace std;
int multiply(int x,int y)
{
    if(x==0||y==0)
        return 0;
    if(y>0)
        return (x+multiply(x,y-1));
    else
        return (-1)*(multiply(x,-y));
}
int main(int argc, char **argv)
{
int a,b;
cin>>a>>b;
cout<<multiply(a,b);
	return 0;
}
