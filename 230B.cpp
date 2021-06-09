/**
 *    author:  huykhanh
 *    created:
**/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

 ll snt(ll x){
    for(ll i=2;i<=sqrt(x); i++){
        if(x%i==0){
            return 0;
        }
    }
return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll x,n;
    set<ll> s;

    for(ll i=2;i<=1000000;i++){
        if(snt(i)==1){
            s.insert(i);
        }
    }
    cin>>n;
    while(n--)
    {
        cin>>x;
        set<ll>::iterator it;
        ll x1= sqrt(x);
        it = s.find(x1);

        if(it != s.end() && x1*x1 == x){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }


return 0;
}
