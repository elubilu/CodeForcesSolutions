#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[5000],sum=0,n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<k; i++)
        sum+=arr[i];
    cout<<sum<<endl;
    return 0;
}