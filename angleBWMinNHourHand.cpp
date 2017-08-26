#include <bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    return a<b?a:b;
}
int rep(double H,double M)
{
    if (H <0 || M < 0 || H >12 || M > 60)
		cout<<"Wrong input";
    if (H == 12) H = 0;
    if (M == 60) M = 0;
   double  h = 0.5*(60*H+M);
   double  m = 6*M;
   double angle=abs(h-m);
   angle=min(360-angle,angle);
   return floor(angle);
}
int main()
{
   int t;
   cin>>t;
   while(t--){
   double M,H;
   cin>>H>>M;
   cout<<rep(H,M)<<endl;
   }
   return 0;
}
