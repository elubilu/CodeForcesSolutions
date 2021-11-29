#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,da,db,l,t;
    cin>>n>>t>>a>>b>>da>>db;
    l=(a-t*da)+(b-t*db);

    for(int i=0; i<t; i++)
        for(int j=0; j<t; j++)
        {
            if(n==0 || n==(a-da*i)|| n==(b-db*j)|| n==(a-da*i+b-db*j))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
            return 0;
}