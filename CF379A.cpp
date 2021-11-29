#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,sum=0,res=0;
    cin>>n>>m;
    sum=n;
    sum+=n/m;
    res=n/m + n%m;
    while(res>=m)
    {
        sum+=res/m;
        res=(res/m)+res%m;
    }
    cout<<sum<<endl;
    return 0;
}