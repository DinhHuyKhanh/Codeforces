#include<bits/stdc++.h>

using namespace std;

int check(int a[], int x, int p){
        for(int i=0;i<p;i++)
        {
            if(a[i]==x ) return 1;
        }
        return 0;
}


int main(){
int n,p,q;
cin>>n;
int a[n];
int b[n-1];
cin>>p;
for(int i=0;i<p;i++)
{
    cin>>a[i];
}
cin>>q;
for(int i=0;i<q;i++)
{
    cin>>b[i];
}

int dem=0;
for(int i=1;i<=n;i++)
{
    if(check(a,i,p)==0 && check(b,i,q)==0) dem++;
}
if(dem==0) cout<<"I become the guy.";
else cout<<"Oh, my keyboard!";


return 0;
}
