#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define  vi(x)  vector<int> x;
#define  pi(x)   vector<pair<int,int>> x;
#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) rbegin(x),rend(x)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 0
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
ll bit[2*100000+100], a[2*100000+100];
int n,q;

void build(int k,int u){
    int idx=k;
    while(idx<=n){
        bit[idx]+=u;
        idx+= (idx)&(-idx);
    }
}

void update(int k,int u){
    int idx=k,x=u;
    u-= a[idx];
    a[idx]=x;
    while(idx<=n){
        bit[idx]+=u;
        idx+= (idx)&(-idx);
    }
}

ll getSum(int a,int b){
    int idx=b;
    ll ans=0;
    while(idx>0){
        ans+= bit[idx];
        idx-=(idx)&(-idx);
    }
    idx=a-1;
    while(idx>0){
        ans-= bit[idx];
        idx-=(idx)&(-idx);
    }
    return ans;
}
void solve()
{
    cin>>n>>q;
    int u;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        build(i,a[i]);
    }

    int a,b,type;
    while(q--){
        cin>>type>>a>>b;
        if(type==1){
            update(a,b);
        }else{
            ll ans= getSum(a,b);
            debugn(ans);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
