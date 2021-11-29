#include<bits/stdc++.h>
using namespace std;
string a,b;
void Result(string &s)
{
    if(s.size()%2==1)return ;
    string s1=s.substr(0,s.size()/2);
    string s2=s.substr(s.size()/2,s.size()/2);
    Result(s2);
    Result(s1);

    s=min(s1+s2,s2+s1);
}
int main()
{
    cin>>a>>b;
    Result(a);
    Result(b);
    if(a==b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;;
    return 0;
}