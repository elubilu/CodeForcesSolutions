#include <bits/stdc++.h>
using namespace std;
#define x 1000005
long long a,b,n,m,arr[x],i,j,res=1;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        for(j=res; j<res+a; j++)
        {
            arr[j]=i+1;
        }
        res+=a;
        //arr[i]=res;
    }
    cin>>m;
    for(j=0; j<m; j++)
    {
        cin>>b;
       cout<<arr[b]<<endl;

    }
    return 0;
}