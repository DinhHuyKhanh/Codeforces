#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
ll POW[1000*5*1000+10];
const ll base= 6969;
const ll MOD = 972663749;
ll N;
void BuildPow(){
    POW[0]=1;
    for(int i=1;i<=N;i++){
        POW[i]=(POW[i-1]*base)%MOD;
    }
}
class Hash{
private:
    string str;
    vector<ll> hashing;
public:
    Hash(string s){
        str =" "+s;
        hashing.pb(0);
        buildHash();
    }
    void buildHash(){
        int n= str.size()-1;
        for(int i=1;i<=n;i++){
            hashing.pb( (hashing[i-1]*base + str[i])%MOD);
        }
    }
    ll getHash  (int i,int j){
    return (hashing[j]- hashing[i-1]*POW[j-i+1] + MOD*MOD)%MOD;
    }
};
void solve()
{
    string s;
    cin>>s;
     N=s.size();
     BuildPow();
    string b = s;
     reverse(b.begin(),b.end());
     Hash h1(s);
     Hash h2(b);
     ll res=1,cnt=1;
     vector<ll> st(N+10,0);
        st[1]=1;
     for(int i=2;i<=N;i++){
        ll Hash1= h1.getHash(1,i), Hash2= h2.getHash(N-i+1,N);
        int k = i/2;
        if(Hash1==Hash2){
            st[i] = st[k] +1;
        }else st[i]=0;
        res+=st[i];
     }
     cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
