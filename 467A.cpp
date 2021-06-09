#include<bits/stdc++.h>

using namespace std;


int main(){
int n,a,b,dem=0;
cin>>n;
while(n--)
{
    cin>>a>>b;
    if(a+2 <= b) dem++;
}
cout<<dem;
return 0;
}
