#include <bits/stdc++.h>

using namespace std;
using ll = long long;
    ll x,y,z;
int check(ll a, ll b , ll c){
    ll res1,res2,res3;
    res1= max(a,b);
    res2 = max(a,c);
    res3= max(b,c);
    if(res1==x &&res2==y && res3==z){
        return 1;
    }
    return 0;
}
void solve()
{   ll a=0,b=0,c=0;
    cin>>x>>y>>z;
    if(check(x,x,y)==1){
        a=x;
        b=x;
        c=z;
    }else if(check(x,x,z)==1){
        a=x;
        b=x;
        c=z;
    }else if(check(x,z,y)==1){
        a=x;
        b=z;
        c=y;
    }else if(check(x,z,z)==1){
        a=x;
        b=z;
        c=z;
    }else if(check(y,x,y)==1){
        a=y;
        b=x;
        c=y;
    }else if(check(y,x,z)==1){
        a=y;
        b=x;
        c=z;
    }else if(check(y,z,y)==1){
        a=y;
        b=z;
        c=y;
    }else if(check(y,z,z)==1){
        a=y;
        b=z;
        c=z;
    }
    if(a==0 || b==0 || c==0){
        cout<<"NO\n";
        return;
    }
        cout<<"YES\n";
        cout<<a<<" "<<b<<" "<<c<<"\n";

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
