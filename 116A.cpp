#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a,b,smin=0,s=0;
cin>>n;
while(n--)
{
    cin>>a>>b;
    s=s+b-a;
    if(smin<s) smin=s;
}
cout<<smin;


return 0;
}
