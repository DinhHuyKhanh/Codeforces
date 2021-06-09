#include<bits/stdc++.h>
#define NAME""
using namespace std;


int main(){
int x;
cin>>x;
int res=0,y;
if(x<=5) cout<<1;
else{

    res = res + x/5;
    y= x%5;
    res= res + y/4;
    y= y%4;
    res = res + y/3;
    y= y%3;
    res = res + y/2;
    y= y%2;
    res = res + y;
    cout<<res;
}
return 0;
}
