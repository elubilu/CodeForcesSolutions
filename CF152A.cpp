#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[200][200],sum=0,n,m;
    cin>>n>>m;
    string s;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        cin>>s;
        for(int j=0; j<m; j++)
        {
            a[i][j]=s[j]-'0';
        }
    }
    for (int i=0; i<n; i++)
    {
        bool wasBest = false;
        for(int j=0; j<m; j++)
        {
            bool isBest = true;
            for(int k=0; k<n; k++)
                if(a[k][j] > a[i][j])
                    isBest = false;
            if(isBest)
                wasBest = true;
        }
        if(wasBest)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}