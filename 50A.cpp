
#include<bits/stdc++.h>
#define NAME""
using namespace std;


int main(){
int n,m,res=0;
cin>>n>>m;
if(n%2==0) res= (n/2)*m;
    else
    {   if(n==1)
            {
                res = m/2;
            }
            else{
                    if(m==1) res = n/2;
                    else
                    {
                    if(m%2==0) res = (m/2)*n;
                    else
                        {
                            res = (n*m/2) ;
                        }
                    }
                }
    }
cout<<res;
return 0;
}
