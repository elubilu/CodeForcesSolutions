#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,a,b,sum=0,l1=0,l2=0;
    cin>>x>>y>>a>>b;
    sum=x*y/__gcd(x,y);
     l1=b/sum;
     l2=(a-1)/sum;
  // for(long long i=a)
     cout<<l1-l2<<endl;

    return 0;
}