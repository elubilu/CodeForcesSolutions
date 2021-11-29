#include <bits/stdc++.h>
using namespace std;
map<int,string>mp;
long long arr[5000];

int main()
{
    mp[1]="Sheldon";
    mp[2]="Leonard";
    mp[3]="Penny";
    mp[4]="Rajesh";
    mp[5]="Howard";
    long long n,sum=0,a,b;
    cin>>n;
    n--;
    while(n>=5)
    {
        n-=5;
        n/=2;
    }
    cout<<mp[n+1]<<endl;
    return 0;
}