#include<bits/stdc++.h>
#define NAME""
using namespace std;


int main(){
string s,a;
cin>>s>>a;
for(int i=0;i<s.size()+1;i++)
{
    if(s[i]>=97) s[i]=s[i]-32;
    if(a[i]>=97) a[i]=a[i]-32;
}
if(s==a) cout<<0;
if(s<a) cout<<-1;
if(s>a) cout<<1;

return 0;
}
