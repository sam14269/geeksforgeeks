#include <iostream>
#define MAX 50
using namespace std;

int main() {
	int arr[] = {16, 17, 4, 3, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int cnt[MAX]={0};
	int i;
	for(i=0;i<n;i++)
		cnt[arr[i]]++;
	for(i=0;i<MAX;i++)
		while(cnt[i]--)
			cout<<i<<" ";
return 0;
}
