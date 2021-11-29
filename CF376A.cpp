#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long sum1=0,sum2=0,f=0,i;
    for( i=0; i<s.size(); i++)
    {
        if(s[i]=='^')
        {
            f=i;
            break;
        }
    }
    for(i=0; i<f; i++)
    {
        if(s[i]>='1' && s[i]<='9') sum1+=(s[i]-'0')*(f-i);
    }
    for( i=f+1; i<s.size(); i++)
    {
        if(s[i]>='1' && s[i]<='9') sum2+=(s[i]-'0')*(i-f);
    }
    if(sum1>sum2) cout<<"left"<<endl;
    else if(sum1==sum2) cout<<"balance"<<endl;
    else cout<<"right"<<endl;
    return 0;
}