#include <bits/stdc++.h>
using namespace std;
vector <int> v;
void print1(vector <int> v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void printcombinationcompose(int n)
{
    if(n<0)
        return ;
    if(n==0)
    {
        print1(v);
        return;
    }
    if(n>=1)
    {   v.push_back(1);
        printcombinationcompose(n-1);
        v.pop_back();
    }
    if(n>=2)
    {   v.push_back(2);
        printcombinationcompose(n-2);
        v.pop_back();
    }
    if(n>=3)
    {
        v.push_back(3);
        printcombinationcompose(n-3);
        v.pop_back();
    }
}

int main(int argc, char **argv)
{
    int number;
    cin>>number;
    printcombinationcompose(number);
	return 0;
}
