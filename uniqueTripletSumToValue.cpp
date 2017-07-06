#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{int t;
cin>>t;
while(t--){
vector <int> arr;
int n,i,j,k;
int sum;
cin>>n;
for(i=0;i<n;i++)
{
    int p;
    cin>>p;
    arr.push_back(p);
}
cin>>sum;
sort(arr.begin(),arr.end());
for(i=0;i<n-2;i++)
{
        j=i+1;
        k=n-1;
        while(j<k)
        {
                int num=sum-arr[i]-arr[j];
                int res=binary_search(arr.begin(),arr.end(),num);
                if(res &&(arr[k]+arr[i]+arr[j]==sum))
                    {
                        cout<<arr[i]<<" "<<arr[j]<<" "<<num<<endl;
                        j++;
                        k--;
                    }
                else if(arr[i]+arr[j]+arr[k]<sum)
                        j++;
 
                else 
                        k--;
        }
}

}
return 0;
}
