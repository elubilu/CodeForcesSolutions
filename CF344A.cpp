#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,a=0,b;
    cin>>n;
    while(n--)
    {
        cin>>b;
        if(b!=a)
        {
            sum++;
            a=b;
        }
    }
    cout<<sum<<endl;
    return 0;
}