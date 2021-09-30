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
#define testcase 0
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;

void solve()
{
    ll n,k,sum=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
        sum+=a[i];
    }

    if(sum%k==0){
        ll avg= sum/k,cnt=0;
        sum=0;
        vector<int> res;
        for(int i=0;i<n;++i){
            sum+=a[i];
            ++cnt;
            if(sum==avg){
                res.pb(cnt);
                sum=0,cnt=0;
            }
            if(sum>avg){
                cout<<"No\n";
                return;
            }
        }
        cout<<"Yes\n";
        for(auto &i: res) cout<<i<<" ";
    }else{
        cout<<"No\n";
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
