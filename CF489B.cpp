#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,m,s,i,j;
	cin>>m>>s;
	if(s==0 || s>9*m)
	{
		if(s==0 && m==1) cout<<"0 0"<<endl;
		else cout<<"-1 -1"<<endl;
		return 0;
	}
	k=s;
	for(i=m-1;i>=0;i--)
	{
		j=max(0,k-9*i);
		if(j==0 && i==m-1) j=1;
		cout<<j;
		k=k-j;
	}
	cout<<" ";
	for(i=0;i<m;i++)
	{ 
	     
		j=min(9,s);
		cout<<j;
		s=s-j;
	}
	cout<<endl;
	return 0;
}