#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    if(n>m) n=m;

    if(n%2==0) cout<<"Malvika";
    else cout<<"Akshat";

return 0;
}
