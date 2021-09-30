#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int binary1(vector<ll> a,int l,int r,ll x, ll val){
    if(l>=r) return 0;
    int m=(l+r)/2;
    if(a[r]+x < val) return r;
    if(a[m]+x < val && a[m+1]+x >= val){
        return m;
    }
    if(a[m+1]+x < val){
        return binary1(a,m+1,r,x,val);
    }
    return binary1(a,l,m-1,x,val);
}
int binary2(vector<ll> a,int l,int r,ll x,ll val){
    if(l>=r) return 0;
    int m= (l+r)/2;
    if(a[r]+x > val) return r;
    if(a[m]+x> val && a[m-1]+x <=val){
        return m;
    }
    if(a[m-1]+x > val){
       return binary1(a,l,m-1,x,val);
    }
    return binary1(a,m+1,r,x,val);
}
void solve(){
    ll n,l,r,res=0,x,y;
    cin>>n>>l>>r;
    vector<ll> a(n);
    for(auto &x: a){
        cin>>x;
    }
    sort(a.begin(),a.end());
    res= (n*(n-1))/2;
    for(int i=0;i<n;i++){
            x= binary1(a,i+1,n-1,a[i],l);
            y= binary2(a,i+1,n-1,a[i],r);
            if(a[i]<r){
            if(x!=0) res -= x-i;
            if(y!=0) res -= n-y-1;
            }
    }
    if(a[n-2]+a[n-1]>r || a[n-2]+a[n-1]<l) res--;

    cout<<res<<"\n";

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
