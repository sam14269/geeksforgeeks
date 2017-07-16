#include <iostream>
using namespace std;

int main() {
int arr[]={5,5,10,40,50,35};
int n=sizeof(arr)/sizeof(arr[0]);
int dp[2]={arr[0],arr[1]};
for(int i=2;i<n;i++)
	{
		int tmp=dp[1];
		dp[1]=dp[0]+arr[i];
		dp[0]= (dp[0]>tmp)?dp[0]:tmp;
	}
int ans=(dp[0]>dp[1])?dp[0]:dp[1];
cout<<ans;
	return 0;
}
