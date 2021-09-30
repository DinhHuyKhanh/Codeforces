#include<bits/stdc++.h>

using namespace std;
pair<int,int> gcd(int a,int b){
    int g= __gcd(a,b);
    a/=g, b/=g;
    return {a,b};
}
void solve(){
    int n;string s;
    cin>>n>>s;
    int d=0,k=0;

    map<pair<int,int>,int> mp;
    pair<int,int> g;

    for(int i=0;i<n;++i){
        if(s[i]=='K') ++k;
        else ++d;
        g= gcd(d,k);
        ++mp[g];
        cout<<mp[g]<<" ";
    }
    cout<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
return 0;
}
