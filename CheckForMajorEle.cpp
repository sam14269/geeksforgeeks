//Time Complexity = O(n)
//It works for both sorted and unsorted arrays.
//print the element occured more than n/2 times.
//---------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
void getmajority(int arr[],int n)
{
	int i;
	unordered_map <int ,int> s;
	unordered_map <int ,int >:: iterator it;
	for(i=0;i<n;i++)
		s[arr[i]]++;
	for(it=s.begin();it!=s.end();it++)
		if(it->second >= n/2)
			cout<< it->first;
}
int main() {
int arr[]={1, 2, 3, 3, 3, 3, 10,10,1,0,1,1,1,1,1,1};
int n=sizeof(arr)/sizeof(arr[0]);
getmajority(arr,n);

	return 0;
}
//---------------------------------------------------
//Other Solution To This
//Time Complexity = O(log n)
//Works for sorted arrays.
#include<bits/stdc++.h>
using namespace std;
int main()
{		
	int arr[] = {1, 2, 3, 3, 3, 3, 10};
	int N = sizeof(arr)/sizeof(arr[0]);	
	int x;
	cin>>x;
	int low=lower_bound(arr,arr+N,x)-arr; 
	int high=upper_bound(arr,arr+N,x)-arr;
	if(high-low>N/2)
		cout<<x <<" is Majority element\n";
	else
		cout<<x <<" is not a Majority element\n";
	return 0;
}
