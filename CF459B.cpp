#include <bits/stdc++.h>
using namespace std;
#define d 5000005
long long arr[d];
int main()
{
    long long n,i,j,m,a=0,b=0,mn=99999999999,mx=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
    //sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        if(arr[i]==mn) a++;
        if(arr[i]==mx) b++;
    }
    if(mn==mx) cout<<mx-mn<<" "<<n*(n-1)/2<<endl;
    else  cout<<mx-mn<<" "<<a*b<<endl;
    return 0;
}