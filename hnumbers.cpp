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
#define  pi   pair<int,int> x
#define tup tuple<int,int,int>
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
// sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
const int Nmax=1000002;
vector<ll> vals;
int res[Nmax],b[Nmax];
void build(){
    vector<ll> a;
    for(int i=5;i*5 < Nmax;i+=4){
        a.pb(i);
         res[i]=1;
    }
    int n=sz(a);
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            if(a[i]*a[j]>Nmax) break;
            if(res[a[i]*a[j]]) ++b[(a[i]*a[j])];
        }
    }
    for(int i=5;i<Nmax;++i){
        if(b[i]==1) vals.pb(i);
    }
    sort(all(vals));
}
int m;

void solve()
{
    build();
    int n=sz(vals);
    while(1){
        cin>>m;
        if(m==0) return;
        int l=0,r=n-1,mid=0,cur=0;
        while(l<=r){
            mid =(l+r)>>1;
            if(vals[mid]<=m){
                cur=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        cout<<m<<" "<<(cur?cur+1:0)<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    //cin>>T;
    T=1;
    while(T--) solve();
return 0;
}
