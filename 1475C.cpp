#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    // tao 2 vector luu số lần xuất hiện
    vector<int> x(a),y(b);
    // tạo 1 vector chứa map lưu các cặp x và y
    vector<pair<int,int>> edges(k);
    // nhập x và y
    for(auto &[c,d] : edges) cin>>c;
    for(auto &[c,d] : edges) cin>>d;

    // với mỗi cặp c và d lưu số lần xuất hiện của chúng.
    for(auto &[c,d] : edges){
        c--;
        d--;
        x[c]++;
        y[d]++;
    }
    ll ans=0;
    // tìm tất cả các cặp không trùng
    for(auto &[c,d] : edges){
        ans += k- x[c]- y[d]+1;
    }
    cout<<ans/2<<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int t;
   cin>>t;
   while(t--){
        solve();
   }
return 0;
}
