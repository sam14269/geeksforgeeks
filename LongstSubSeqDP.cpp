#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int longsubseq(char str1[],char str2[],int m,int n)
{
    int tmp[m+1][n+1];
    for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if (i == 0 || j == 0)
		            tmp[i][j] = 0;
                else if(str1[i-1]==str2[j-1])
                        tmp[i][j]=tmp[i-1][j-1]+1;
                else
                    tmp[i][j]=max(tmp[i-1][j],tmp[i][j-1]);
            }
        }
    return tmp[m][n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    char str1[10000];// = "ABCDGHLQR";
    char str2[10000];// = "AEDPHR";
    int m ;//= strlen(str1);
    int n ;//= strlen(str2);
    cin>>m>>n;
    for(int i=0;i<m;i++)
        cin>>str1[i];
    for(int i=0;i<n;i++)
        cin>>str2[i];
    cout<<longsubseq(str1,str2,m,n)<<endl;
    }
    return 0;
}
