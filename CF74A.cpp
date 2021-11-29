#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,s1,u,sum=-9999,res,n;
    string s,s2;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s>>s1>>u>>a>>b>>c>>d>>e;
        res=s1*100-u*50+a+b+c+d+e;
        if(res>sum)
        {
            sum=res;
            s2=s;
        }

    }
    cout<<s2<<endl;

    return 0;
}