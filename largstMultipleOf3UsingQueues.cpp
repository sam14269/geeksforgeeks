#include <bits/stdc++.h>
using namespace std;
void getnumber(vector <int> arr,int n)
{
    int sum=0;
    int i,rem;
    queue <int> q0,q1,q2;
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
       rem= arr[i]%3;
       if(rem==0)
           q0.push(arr[i]);
       else if(rem==1)
           q1.push(arr[i]);
       else
           q2.push(arr[i]);
    }
    if(sum%3==1)
    {
         if(!q1.empty())
            q1.pop();
        else 
            {
                if(!q2.empty())
                    q2.pop();
                else 
                    return;
                if(!q2.empty())
                    q2.pop();
                else 
                    return;
            }
    }
    else if(sum%3==2)
    {
        if(!q2.empty())
            q2.pop();
        else 
            {
                if(!q1.empty())
                    q1.pop();
                else 
                    return;
                if(!q1.empty())
                    q1.pop();
                else 
                    return;
            
            }
    }
    vector <int> list;
    while(!q0.empty())
       { list.push_back(q0.front());
       q0.pop();}
    while(!q1.empty())
        {list.push_back(q1.front());
        q1.pop();}
    while(!q2.empty())
        {list.push_back(q2.front());
        q2.pop();}
    sort(list.begin(),list.end(),greater<int>());
    for(i=0;i<list.size();i++)
        cout<<list[i];
}
int main(int argc, char **argv)
{   int arr[]={9,9,9};
    vector<int> v (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    sort(v.begin(),v.end());
    getnumber(v,v.size());
    return 0;
}
