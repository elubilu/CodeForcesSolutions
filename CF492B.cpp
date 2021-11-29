#include <bits/stdc++.h>
using namespace std;
int main()
{
    double  mx=0,a,b,arr[1005];
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double res,sum;
    for(int i=1; i<n; i++)
    {
        mx=max(mx,(arr[i]-arr[i-1]));
    }
   res=max(mx/2.0,max(arr[0],m-arr[n-1]));

    printf("%.15lf\n",res);
    return 0;
}