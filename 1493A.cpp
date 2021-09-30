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
#define  vi = vector<int>;
#define  pi = pair<int,int>;
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
#define testcase 1
const int mod = (int) 1e9 + 7;

int n,k;
void solve()
{
    cin>>n>>k;
    vector<int> a;
    for(int i=k+1;i<=n;i++){
        a.pb(i);
    }
    int sum=0;
    for(int i=k-1;i>=(k+1)/2;i--){
            a.pb(i);
    }
    cout<<sz(a)<<"\n";
    for(auto &x: a){
        debug(x);
    }
    cout<<'\n';
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
