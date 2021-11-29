#include <bits/stdc++.h>
using namespace std;
 long long n,arr[5],s,a,b;
int main()
{

    cin>>a>>b>>n;
    while(     n-=__gcd(s?b:a,n))
    {


          s^=1;

        //cout<<s<<endl;
    }
    cout<<s<<endl;
    return 0;
}