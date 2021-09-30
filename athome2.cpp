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
ll n,d,t,l,r,type;
bool a[100*1000+100];

void solve()
{
    cin>>n>>d>>t;
    vector<pair<ll,ll>> vii(n+2);
    // nhap du lieu
    vii[0]={0,0},vii[n+1]={d,d}; // vii 0 : trạng thái ban đầu ở nhà tại thời gian time=0;
    a[0]=true,a[n+1]=true;// biểu thị trậng thái ở nhà
    for(int i=1;i<=n;++i){
        cin>>vii[i].f>>vii[i].s>>a[i];
    }

        for(int i=n;i>0;--i){
            if(a[i]==false && a[i-1]!=a[i]){
                if(vii[i].f - t < vii[i-1].s){
                    a[i-1]=false;
                }
            }
        }
        for(int i=0;i<n;++i){
            if(a[i]==false && a[i+1]!=a[i] ){
                if(vii[i+1].f -t < vii[i].s ){
                    a[i+1]=false;
                }

            }
        }

    ll res=0;
    for(int i=1;i<=n+1;++i){
        if(a[i]==true){
            if(a[i-1] ==true){
                res+= vii[i].s-vii[i-1].s;
            }else{
                res+= vii[i].s-vii[i-1].s-t;
            }
        }else{
            if(a[i-1]==true){
                res+= vii[i].f -t - vii[i-1].s;
            }else{
                res+= max(vii[i].f-vii[i-1].s - 2*t,(ll)0);
            }
        }
    }
    debugn(res);
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
