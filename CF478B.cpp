#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,mx,mn,i,j;
    cin>>n>>m;
    cout<<(m*(n/m-1)+(n%m)*2)*(n/m)/2<<" "<<((n-m+1)*(n-m)/2)<<endl;
    return 0;
}