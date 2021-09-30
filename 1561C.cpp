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
#define  vi(x)  vector<int> x;
#define  pi(x)   vector<pair<int,int>> x;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x),rend(x);
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
const int mod = (int) 1e9 + 7;

void solve()
{
    uint64_t n,k,x,start,ends;
    cin>>n;
    vector<pair<uint64_t,uint64_t>> p;
    for(int i=0;i<n;++i){
        cin>>k;
        cin>>start;
        start+=1;
        ends=start+1;
        for(int j=1;j<k;j++){
            cin>>x;
            if(x>=ends){
                start+= (x-ends)+1;
                ends += (x-ends)+2;
            }else{
                ++ends;
            }
        }
        p.pb({start,ends});
    }
    sort(all(p));
    uint64_t res=0,sum;
    res= p[0].f;
    sum=p[0].s;
    for(int i=1;i<n;++i){
        if(p[i].f <= sum){
            sum+= (p[i].s-p[i].f);
        }else{
            res += (p[i].f - sum);
            sum = p[i].s;
        }
    }
    cout<<res<<'\n';
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
