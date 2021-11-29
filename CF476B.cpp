#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,arr[5000],sum=0;
    cin>>n>>m>>k;
    for(int i=0; i<=m; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<m; i++)
    {
        if(__builtin_popcount(arr[m]^arr[i])<=k) sum++;
    }
    cout<<sum<<endl;
    return 0;
}