#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 27/09/2021
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
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
const ll MOD = 972663749;

void solve()
{
    int n;
    cin>>n;
    vii a(n);
    for(auto &i: a){
        cin>>i.f>>i.s;
    }
    if(n==1){
        cout<<(a[0].f*a[0].s)<<endl;
        return;
    }

    int ans=0,cnt=0,i;
    for(i=0;i+1<n;++i){
        if(a[i].s >= a[i+1].s){
            ans+= a[i].s*a[i].f;
            if(i+2==n) ans+= a[i+1].s*a[i+1].f;
            continue;
        }

        cnt+= a[i].f;
        for(int j=i+1;j<n;++j){
            if(a[j].s >= a[i].s) cnt+=a[j].f;
            else {
                ans+=cnt*a[i].s;
                cnt=0;
                i=j-1;
                break;
            }
        }
        if(cnt){
            ans+=cnt*a[i].s;
            i=n;
        }
    }


    cout<<ans;

}
void huykhanh(){
    int T;
    //cin>>T;
    T=1;
    while(T--) solve();
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    huykhanh();
return 0;
}
