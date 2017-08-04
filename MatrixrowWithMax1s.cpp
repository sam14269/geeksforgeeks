#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(int arr[][100],int R,int C)
{
    int maxcnt=INT_MIN;
    int actual_ans;
    for(int i=0;i<R;i++)
    {
        int cnt1=0;
        for(int j=0;j<C;j++)
        {
            if(arr[i][j]==1)
                {
                    cnt1++;
                }
        }
       if(cnt1>maxcnt)
           { maxcnt=cnt1;
            actual_ans=i;}
    } 
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
            //vector<vector<int> > arr;
            for(int p=0;p<R;p++)
                for(int q=0;q<C;q++)
                    cin>>arr[p][q];

	printf("%d\n",rowWithMax1s(arr,R,C));
	}
	return 0;
}
