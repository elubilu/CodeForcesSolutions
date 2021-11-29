#include <bits/stdc++.h>
using namespace std;
int arr[24567];
int main()
{
    int m,n;
    cin>>n>>m;
    int  l,r,p,i,j;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    while(m--)
    {
        cin>>l>>r>>p;
        int sum=l;
        for(int k=l; k<=r; k++)
        {
            if(arr[k]<arr[p]) sum++;
        }
        //cout<<sum<<" "<<arr[p]<<endl;
        if(sum==p) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}