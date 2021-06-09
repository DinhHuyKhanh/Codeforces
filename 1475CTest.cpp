/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;
int solve(){
    int a,b,k;
    cin>>a>>b>>k;
    vector<pair<int,int>> vt(k);
    vector<int> cnt1(a), cnt2(b);
    for(auto &[x,y] : vt){
        cin>>x;
    }
    for(auto &[x,y] : vt) cin>>y;

    for(auto &[x,y] : vt){
        x--;
        y--;
        cnt1[x]++;
        cnt2[y]++;
    }
    long long ans=0;
    for(auto &[x,y] : vt){
        ans+= k- cnt1[x] - cnt2[y] +1;
    }
    cout<<ans/2<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }



return 0;
}
