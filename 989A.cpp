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
#define testcase 0
const int mod = (int) 1e9 + 7;

void solve()
{
    string s;
    cin>>s;
    int n=sz(s);
    s=" "+s;
    for(int i=3;i<=n;i++){
        int cntA=0,cntB=0,cntC=0;
        for(int j=0;j<3;j++){
            if(s[i-j]=='A'){
                ++cntA;
            }else if(s[i-j]=='B') ++cntB;
            else if(s[i-j]=='C') ++cntC;
        }
        if(cntA && cntB &&cntC){
            yes;
            return;
        }
    }
    no;
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
