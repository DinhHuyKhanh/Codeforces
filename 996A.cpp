#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int res=0;
    res+=n/100;
    n=n%100;
    res+=n/20;
    n%=20;
    res+= n/10;
    n%=10;
    res+= n/5;
    n%=5;
    res+=n;
    cout<<res;
return 0;
}
