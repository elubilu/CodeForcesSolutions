#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s1>>s2>>s;
    //map<char,int>mp;

   s1+=s2;
   sort(s1.begin(),s1.end());
   sort(s.begin(),s.end());

    if(s1==s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}