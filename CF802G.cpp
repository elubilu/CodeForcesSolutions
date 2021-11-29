#include <bits/stdc++.h>
using namespace std;
bool isSubSequence(string str1, string str2, int m, int n)
{

    if (m == 0) return true;
    if (n == 0) return false;

    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);

    return isSubSequence(str1, str2, m, n-1);
}
int main()
{
    string s,s2="",s1="heidi";
    int f,k=0;
    cin>>s;
    f=s.size();
    for(int i=0; i<f; i++)
    {
        if(s[i]==s1[k])
        {
            s2+=s[i];
            k++;
        }
    }
    if(s2==s1) cout<<"YES"<<endl;
    //if(isSubSequence("heidi",s,5,f)) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}