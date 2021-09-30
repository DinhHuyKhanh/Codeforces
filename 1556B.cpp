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
#define testcase 1
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),cnt1,cnt2;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]&1){
            cnt1.pb(i);
        }else cnt2.pb(i);
    }
    if(abs(sz(cnt1) - sz(cnt2)) >1 ){
        debugn(-1);
        return;
    }

    int N=sz(cnt1), M=sz(cnt2);
    if(N==M){
        int ans=0,id=0,res=0;
        id=0;
        for(int i=0;i<sz(cnt1);++i){
            res+= abs(cnt1[i] - id);
            id+=2;
        }
        id=1;
        for(int i=0;i<sz(cnt1);++i){
            ans+= abs(cnt1[i]- id);
            id+=2;
        }
        res=min(res,ans);
        debugn(res);
        return;
    }
    if(N>M){
        int ans=0,id=0,res=0;
        id=0;
        for(int i=0;i<sz(cnt1);++i){
            res+= abs(cnt1[i] - id);
            id+=2;
        }
        debugn(res);
        return;
    }
    if(M>N){
        int ans=0,id=0,res=0;
        id=0;
        for(int i=0;i<sz(cnt2);++i){
            res+= abs(cnt2[i] - id);
            id+=2;
        }
        debugn(res);
        return;
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
