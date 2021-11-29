#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x,y,i,j,arr1[5000],arr2[5000],sum=0;
    cin>>x>>y>>a>>b;
    for(i=a; i<=x; i++)
    {
        for(j=b; j<=y; j++)
        {
            if(i>j)
            {
                arr1[sum]=i;
                arr2[sum]=j;
                sum++;
               // cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<sum<<endl;
    for(i=0; i<sum; i++)
        cout<<arr1[i]<<" "<<arr2[i]<<endl;
    return 0;
}