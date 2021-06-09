#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
int a[n];
int res=0;

int vt1=0,vt2=0,smax,smin;
    for(int i=0;i<n;i++)
      {
         cin>>a[i];
         if(i==0)
         {
              smax = a[0];
             smin=a[0];
         }
         if(a[i]>smax)
            {
                smax =a[i];
                vt1=i;
            }
         if(a[i]<=smin)
         {
             vt2=i;
            smin = a[i];
         }
      }
    if(vt1>vt2)
    {
        cout<<vt1+(n-1-vt2)-1;
    }
    else cout<<vt1+(n-vt2-1);

return 0;
}
