#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long sum=0,res=0,val=0,k,n,a,p;
   cin>>n>>p>>k;
   for(int i=0; i<n; i++)
   {
       cin>>a;
       if(res+a<=p)
       {
           res+=a;
           
       }
       else 
       {
           res=a;
           sum++;   
       }
       sum+=res/k;
       res%=k;
   }
   
   sum+=ceil((double)res/(double)k);
    cout<<sum<<endl;

    return 0;

}