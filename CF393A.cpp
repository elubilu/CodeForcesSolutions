#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=0,n=0,i=0,e=0,t=0,j,k;
    cin>>s;
    for(j=0; j<s.size(); j++)
    {
        if(s[j]=='n') n++;
        if(s[j]=='i') i++;
        if(s[j]=='t') t++;
        if(s[j]=='e') e++;
    }
    n--;
    n/=2;
    e/=3;
    cout<<min(min(n,e),min(i,t))<<endl;
    return 0;
}