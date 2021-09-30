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

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int k = abs(a-b), n=k*2;
    if(c>n){
        debugn(-1);
        return;
    }
    if(a> n || b>n ){
        debugn(-1);
        return;
    }
    if(min(a,b) > k){
        debugn(-1);
        return;
    }
    if(c>k){
        int res= c-k;
        if(res != a && res!= b){
            debugn(res);
            return;
        }
    }else{
        int res= c+k;
        if( res != a && res!= b){
            debugn(res);
            return;
        }
    }
    debugn(-1);

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
