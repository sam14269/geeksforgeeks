#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={11,13,21,3};
   int n=sizeof(arr)/sizeof(arr[0]);
    stack <int> s;
    int i;
    int next=-1;
    s.push(arr[0]);
    for(i=1;i<n;i++)
        {
           
            while(!s.empty() && s.top() < arr[i])
                {
                    cout<<s.top()<<" ----- "<<arr[i]<<endl;
                    s.pop();
                    
                }
            s.push(arr[i]);
        }
          while(!s.empty())
          {
              int top=s.top();
              s.pop();
              cout<<top<<" ----- "<<next<<endl;
          }
    return 0;
}
