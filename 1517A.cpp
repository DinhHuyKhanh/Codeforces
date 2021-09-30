#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
 vector<uint64_t> Sum,POW;
void build(){
    Sum.pb(2050);
    POW.pb(1);
    for(int i=1;i<17;i++){
        POW.pb(POW[i-1]*10);
        Sum.pb(2050*POW[i]);
    }
}
void solve()
{
    ll a,res=0;
    cin>>a;
    while(a>=2050 && a%2050==0){
     auto it =lower_bound(Sum.begin(),Sum.end(),a);
     if(*it >a){
        a-= *(--it);
     }else a-= *it;
        res++;
    }

    if(a==0){
        cout<<res<<"\n";
    }else cout<<-1<<"\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    build();
    while(t--){
    solve();
    }
return 0;
}
