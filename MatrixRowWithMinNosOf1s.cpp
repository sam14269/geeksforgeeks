#include <bits/stdc++.h>
using namespace std;
int rowWithMin1s(int arr[][100],int R,int C)
{
    int mincnt=INT_MAX;
    int actual_ans;
    int cnt0=0;
    for(int i=0;i<R;i++)
    {
        int cnt1=0;
        for(int j=0;j<C;j++)
        {
            if(arr[i][j]==1)
                    cnt1++;
            if(arr[i][j]==0)
                    cnt0++;
        }
       if(cnt1<mincnt && cnt1>0)
           { 
            mincnt=cnt1;
            actual_ans=i;
           }       
    } 
    if(cnt0==R*C)
        actual_ans=-1;
    return actual_ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	          int R,C;
            cin>>R>>C;
            int arr[100][100];
            for(int p=0;p<R;p++)
                for(int q=0;q<C;q++)
                    cin>>arr[p][q];

	          cout<<rowWithMin1s(arr,R,C)<<endl;
	}
	return 0;
}
