#include <bits/stdc++.h>

using namespace std;

set<int64_t> myset;
int64_t k;

void solve(){
        cin>>k;
        for(int64_t i=1;i*i*i<=k;++i){
            if(myset.count(k-i*i*i)){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int64_t i=1;i<=10000;++i){
        myset.insert(i*i*i);
    }
    while(t--){
        solve();
    }
return 0;
}
