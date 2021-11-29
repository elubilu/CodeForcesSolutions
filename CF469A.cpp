#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,a;
    map<int,int>mp;
    cin>>n;
    cin>>p;
    for(int i=0; i<p; i++)
    {
        cin>>a;
        mp[a]++;
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>a;
        mp[a]++;
    }
    if(mp.size()==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}