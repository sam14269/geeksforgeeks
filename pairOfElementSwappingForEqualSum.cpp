#include <bits/stdc++.h>
using namespace std;
int binary(vector <int> a,int l,int r,int x)
{    
    if (r >= l)
    {
    int mid=l+(r-l)/2;
    if(a[mid]==x)
        return 1;
    if(a[mid]>x)
        return binary(a,l,mid-1,x);
    return binary(a,mid+1,r,x);
    }
    return -1;
}
int main(int argc, char **argv)
{
    vector <int> a;
    vector <int> b;
    int suma=0,sumb=0,i,na,nb,j;
    cin>>na>>nb;
    for(i=0;i<na;i++)
    {
        int pa;
        cin>>pa;
        a.push_back(pa);
        suma=suma+a[i];
    }
    for(i=0;i<nb;i++)
    {
        int pb;
        cin>>pb;
        b.push_back(pb);
        sumb=sumb+b[i];
    }
    //cout<<suma<<" "<<sumb;
    
    for(j=0;j<nb;j++)
    {
        int diff=(suma-sumb)/2;
        int ab=b[j]+diff;
        int res=binary(a,0,na-1,ab);
        cout<<"res="<<res<<endl;
        cout<<"a="<<ab<<endl;
        if(res)
        {
            //swap(b[j],b[j]+diff);
            int equisuma=suma-diff+b[j];            
            int equisumb=sumb-b[j]+diff;
            cout<<"A="<<equisuma<<"---B="<<equisumb<<endl;
            if(equisuma==equisumb)
                cout<<"elements are "<<b[j]<<" "<<ab;
            
        }
    }
    return 0;
}
