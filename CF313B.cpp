#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
   long long m,n,a,b,i,sum=0,arr[100005];
    cin>>s;
    cin.ignore();
    for(i=s.size()-2; i>=0; i--)
    {
        if(s[i]==s[i+1]) sum=1;
        else  sum=0;
        arr[i]=arr[i+1]+sum;

    }
    cin>>n;
   for(int j=0; j<n; j++)
    {
        cin>>a>>b;

        cout<<arr[a-1]-arr[b-1]<<endl;
        sum=0;
    }
    return 0;
}