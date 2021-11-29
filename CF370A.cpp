#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int a1,a2,n1,n2;
     cin>>a1>>a2>>n1>>n2;
     if(a1==n1 || n2==a2) cout<<"1 ";
     else cout<<"2 ";
     if((a1+a2)%2 !=(n1+n2)%2)
     {
         cout<<0;
     }
     else
     {
         if(a1+a2==n1+n2 || a1-a2==n1-n2) cout<<1;
         else cout<<2;
     }
     cout<<" "<<max(abs(a1-n1),abs(n2-a2))<<endl;
     return 0;
 }