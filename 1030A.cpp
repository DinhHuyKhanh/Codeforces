#include<bits/stdc++.h>

using namespace std;

int main(){
int n,dem=0,x;
cin>>n;
while(n--)
{
    cin>>x;
    if(x==1) dem=1;
}
if(dem==1) cout<<"HARD";
else    cout<<"EASY";
return 0;
}
