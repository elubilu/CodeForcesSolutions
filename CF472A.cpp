#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    cout<<8+(n&1)<<" "<<n-8-(n&1);
    return 0;
}