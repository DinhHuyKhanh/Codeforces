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
#define rall(x) x.rbegin(),x.rend()
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
ll n,m,x;
vector<ll> a;
void conbination( map<ll,ll> &res, int l,int r, ll sum){

    for(int i=0;i<(1<<(r-l+1) );++i){
            sum=0;
            bool bad=false;
        for(int j=l; j<=r ;++j){
            if( i & (1<<(j-l)) ){
                sum+=a[j];
                bad=true;
            }
            if(sum>m) bad=false;
        }
        if(bad) ++res[sum];
    }
}
map<ll,ll>  build(int l,int r){
    map<ll,ll> c,d,ans;
    if(r-l<4){
        ll sum=0,mid=(r+l)/2;
        ++c[0],++d[0];
        conbination(c,l,mid-1,sum);
        conbination(d,mid,r,sum);
    }else{
        int mid=(r+l)/2;
        c=build(l,mid);
        d=build(mid+1,r);
    }
    for(auto i: c){
        for(auto j: d){
            if(i.f+j.f<=m){
                ans[i.f+j.f]+= (i.s*j.s);
            }else break;
        }
    }
    return ans;
}

void solve()
{
    cin>>n>>m;
    ll SUM=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>m) continue;
        a.pb(x);
        SUM+=x;
    }
    sort(rall(a));
    if(SUM<m){
        debugn(0);
        return;
    }

    map<ll,ll> c,d;
    int l=0,r=sz(a)-1;
    if(r-l<3){
        ll sum=0,mid=(r+l)/2;
        ++c[0],++d[0];
        conbination(c,l,mid-1,sum);
        conbination(d,mid,r,sum);
    }else{
        int mid=(r+l)/2;
        c=build(l,mid);
        d=build(mid+1,r);
    }

    ll ans=0;
    for(auto &i : c){
        ans+= (c[i.f]*d[m-i.f]);
    }

    debugn(ans);
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
