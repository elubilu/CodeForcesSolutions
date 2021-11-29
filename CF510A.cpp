#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        if(i%4==1 || i%4==3)
        {
            for(j=0; j<m; j++)
                cout<<"#";

        }
        else if(i%4==2)
        {
            for(j=1; j<m; j++)
                cout<<".";
            cout<<"#";
        }
        else if(i%4==0)
        {
            cout<<"#";
               for(j=1; j<m; j++)
                cout<<".";
        }
         cout<<endl;
    }

    return 0;
}