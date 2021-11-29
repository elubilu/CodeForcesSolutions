#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[200],i,j,sum1=0,sum2=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n; i++)
    {
        if(i<n/2) sum2+=arr[i];
        else sum1+=arr[i];
    }
    //cout<<sum1<<" *** "<<sum2<<endl;
    int p=n/2;
    if(n%2==1) p++;
    //cout<<p<<endl;
    if(sum1 > sum2)
    {
        for(i=n/2; i<n; i++)
        {
                 // cout<<arr[i]<<endl;
            if( (sum1 - arr[i]) > (sum2+arr[i]))
            {
                p--;
                sum1-=arr[i];
                sum2+=arr[i];
              //  cout<<sum1<<" ** "<<sum2<<endl;
            }
            else break;
        }
    }
    else
    {
        for(i=n/2-1; i>=0; i--)
        {
            if(sum1 <= sum2)
            {
                p++;
                sum2-=arr[i];
                sum1+=arr[i];
               // cout<<sum1<<" ***** "<<sum2<<endl;
            }
            else break;
        }
    }

    cout<<p<<endl;
    return 0;
}