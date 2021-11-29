#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr1[100005],arr2[100005],arr3[100005];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    sort(arr1,arr1+n);
     for(int i=0; i<n-1; i++)
    {
        cin>>arr2[i];
    }
        sort(arr2,arr2+n-1);
     for(int i=0; i<n-2; i++)
    {
        cin>>arr3[i];
    }
        sort(arr3,arr3+n-2);
        int f=0;
   for(int i=0;i<n-1; i++)
   {
       if(arr1[i]!=arr2[i])
       {
           cout<<arr1[i]<<endl;
           f=5;
           break;
       }
   }
   if(f==0) cout<<arr1[n-1]<<endl;
   f=0;
    for(int i=0; i<n-2; i++)
    {
        if(arr2[i]!=arr3[i])
        {
            f=6;
            cout<<arr2[i]<<endl;
            break;
        }
    }
    if(f==0) cout<<arr2[n-2]<<endl;
    return 0;
}