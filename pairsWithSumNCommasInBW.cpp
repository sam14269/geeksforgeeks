#include <bits/stdc++.h>
using namespace std;
/*int binarySer(vector <int> &v2,int l,int r,int x)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(v2[mid]==x)
            return mid;
        else if(v2[mid]>x)
            return binarySer(v2,l,mid-1,x);
        else 
            return binarySer(v2,mid+1,r,x);
    }
    return -1;
}*/
void findPairs( vector<int> &arr1, vector<int> &arr2, int n,int m, int x)
{
    unordered_set<int> s;
    for (int i=0; i<m; i++)
        s.insert(arr2[i]);
    vector<pair<int,int>>v;
    for (int j=0; j<n; j++)
    {
        int flag=0;
        
        if (s.find(x - arr1[j]) != s.end())
        {
           // cout << x-arr1[j] << " "<< arr1[j];
            //flag=1;
            
            v.push_back(make_pair(x-arr1[j],arr1[j]));
        }
    }
    
    int l=v.size();
    
    auto it=v.begin();
    int cnt=1;
    for(;it!=v.end();++it)
    {
        cout<<(*it).second<<" "<<(*it).first;
        if(cnt<=l-1)
        {
            cout<<", ";
        }
        cnt++;
    }
            
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n1,n2,sum;
        cin>>n1>>n2>>sum;
        vector<int> v1,v2;
        for(int i=0;i<n1;i++)
        {
            int p;
            cin>>p;
            v1.push_back(p);
        }
        for(int i=0;i<n2;i++)
        {
            int q;
            cin>>q;
            v2.push_back(q);
        }
        findPairs(v1,v2,n1,n2,sum);
        cout<<endl;
	}
	return 0;
}
