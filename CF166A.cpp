#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector< pair<int,int> > v;
   int n,k,x,y,i;
   cin>>n>>k;
  for(i=0; i<n; i++)
   {
       cin>>x>>y;
       v.push_back(make_pair(x,-y));
   }
   sort(v.begin() , v.end());
   int s,p,ans=0;

   s=v[n-k].first;
   p=v[n-k].second;
  for(i=0; i<v.size(); i++)
   {
       if(v[i].first==s && v[i].second==p)
        ans++;
   }
   cout<<ans<<endl;
    return 0;
}