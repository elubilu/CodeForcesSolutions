#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum;
    cin>>a>>b;
    if(a>=b && (a+b)>1)
        sum=4*a-3;
    else if(a<b && b>=-a)
        sum=4*b-2;
    else if(b<-a && b>=a)
        sum=4*(-a)-1;
    else
        sum=4*(-b);

    cout<<sum<<endl;
    return 0;
}