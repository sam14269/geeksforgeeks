#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    vector <int> a,b;
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
    int diff=(suma-sumb)/2;
    for(j=0;j<nb;j++)
    {    int ab=b[j]+diff;
        sort(a.begin(),a.end());
        int res=binary_search(a.begin(),a.end(),ab);
        if(res)
        {
            int equisuma=suma-ab+b[j];            
            int equisumb=sumb-b[j]+ab;
            if((equisuma==equisumb)&& (abs(suma-sumb)==b[j]+ab))
                cout<<b[j]<<" "<<ab<<endl;
            break;
        }
    }
    return 0;
}
