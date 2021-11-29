#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n=0,a,b;
    cin>>a>>b;
    while(1)
    {
        n++;
        if(a<n && n%2==1)
        {
            cout<<"Vladik"<<endl;

            return 0;
        }
        else if(b<n && n%2==0)
        {
            cout<<"Valera"<<endl;

            return 0;
        }
        if(n%2==1)
        {
            a-=n;
            //b+=n;
        }
        else
        {
            b-=n;
            //a+=n;
        }

    }
    return 0;
}