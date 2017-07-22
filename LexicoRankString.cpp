#include <bits/stdc++.h>
using namespace std;
void permute1(string str,string out,string ser)
{
	static int rank=1;
	map<string,int> m;
	map<string,int>:: iterator p;
	if(str.size()==0)
		{
			m.insert(make_pair(out,rank++));
		}
	for(int i=0;i<str.size();i++)
	{
		permute1(str.substr(1), out+str[0],ser);
		rotate(str.begin(),str.begin()+1,str.end());
	}
	for(p=m.begin();p!=m.end();p++)
		if(m.find(ser)!=m.end())
			cout<<p->second<<endl;
}
int main() {
	string str="ABC";
  string s;
  cin>>s;
	permute1(str,"",s);
	return 0;
}
