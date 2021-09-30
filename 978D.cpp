#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll check(vector<ll> a,ll d,ll x){
    ll res;
    for(int i=2;i<a.size();i++){
        if(a[i]-x==d){
            x=a[i];
            res++;
        }else if(a[i]-x>d){
            x=--a[i];
            res++;
        }else if( a[i]-x <d){
            x=++a[i];
            res++;
        }
        if(x-a[i-1]!=d){
            res=-1;
            break;
        }
    }
    return res;
}
void solve()
{
    ll n,d=0,d1,d2,res1,res2,res3,x;
    cin>>n;
    vector<ll> a(n);
    for(auto &x: a) cin>>x;
    if(n<=2){
        cout<<0;
        return;
    }
    sort(a.begin(),a.end());
    d=a[1]-a[0];
    res1= check(a,d,a[1]);

    x=++a[0];
    d=a[1]-x;
    res2 =  check(a,d,a[1]);

    x=--a[0];
    d=a[1]-x;
    res3= check(a,d,a[1]);

    if(res1==-1 && res2 == -1 && res3 == -1){
        cout<<-1;
        return;
    }
    res1 = (res1 == -1)? 9999999 : res1;
    res2 = (res2 == -1)? 9999999 : res2+1;
    res3 = (res3 == -1)? 9999999: res3 +1;
    cout<<min(res1,min(res2,res3));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
