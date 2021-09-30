#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  cout<<'\n'
#define  vi  vector<int>;
#define  pi  pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x),rend(x);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 1
const int mod = (int) 1e9 + 7;

vector<ll> a;
void build(){
    ll res=0;
    a.pb(0);
    for(int i=1;res<1000*1000*1000+7;i++){
        res= i*i;
        a.pb(res);
    }
}
    int k,i,j;
void solve()
{
    cin>>k;

    int l=1,r=sz(a)-1,id;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] <= k){
            id=m;
            l=m+1;
        }else{
            r=m-1;
        }
    }
    k-=a[id];
    i=id+1;
    if(k==0){
        cout<<id<<" "<<1<<'\n';
        return;
    }
    int soluong = (a[id+1]- a[id]);
    if(k <= (soluong+1)/2){
        j=k;
    }else{
        j = soluong -k+1;
        swap(i,j);
    }
    cout<<j<<" "<<i<<'\n';



}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    build();
    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
