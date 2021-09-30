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
string s1,s2;
class Hash{
private:
    string str;
    const ll base= 311;
    const ll MOD = 972663749;
    vector<ll> hashing;
    vector<ll> POW;
public:
    Hash(string s){
        str =" "+s;
        POW.pb(1);
        hashing.pb(0);
        buildHash();
    }
    void buildHash(){
        int n= str.size()-1;
        for(int i=1;i<=n;i++){
            hashing.pb( (hashing[i-1]*base + str[i] -'a' +1)%MOD);
            POW.pb((POW[i-1]*base)%MOD);
        }
    }
    ll getHash  (int i,int j){
    return (hashing[j]- hashing[i-1]*POW[j-i+1] + MOD*MOD)%MOD;
    }
};
void solve()
{
    cin>>s1>>s2;
    if(sz(s1)>sz(s2)) swap(s1,s2);
    Hash a(s1);
    Hash b(s2);
    int n=sz(s1), m=sz(s2),k=n;

        while(k){
            for(int i=1;i<=n-k+1;i++){
                for(int j=1;j<=m-k+1;j++){
                    if(a.getHash(i,i+k-1) == b.getHash(j,j+k-1)){
                       // cout<<k<<"this k\n";
                        int res= (n-k) + (m-k);
                        debugn(res);
                        return;
                    }
                }
            }
            --k;
        }
        debugn(n+m);

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
