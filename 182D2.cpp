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

class Hash{
private:
    string str;
    const ll base= 311;
    const ll MOD = 1.8446744e+19;
    vector<int> hashing;
    vector<int> POW;
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
    string s1,s2;
    cin>>s1>>s2;
    Hash h1(s1);
    Hash h2(s2);
    int n = s1.size(), m= s2.size(), N= min(n,m),res=0;
    for(int i=1;i<=N;i++)
    {
        if(n%i==0 && m%i==0)
        {
            ll val = h1.getHash(1,i);
            bool cnt1=1, cnt2=1;

            for(int j=1;j<=n-i+1; j+=i)
            {
                if(h1.getHash(j,i+j-1) != val){
                    cnt1=0;
                    break;
                }
            }

            for(int j=1;j<=m-i+1;j+=i)
            {
                if(h2.getHash(j,i+j-1) != val){
                    cnt2=0;
                    break;
                }
            }
        res += cnt1&cnt2;
        }
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
