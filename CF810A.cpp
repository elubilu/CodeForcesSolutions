#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,res=0,sum=0,a,ans;

    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }
    while(round((double)sum/n)!=k)
    {
        sum+=k;
        n++;
        res++;
    }
    cout<<res<<endl;
    return 0;
}