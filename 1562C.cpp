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
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;++i){
        if(s[i]=='0'){
            if(i<n/2){
                cout<<i+1<<" "<<n<<" "<<(i+2)<<" "<<n<<'\n';
            }else{
                cout<<1<<" "<<i+1<<" "<<1<<" "<<(i)<<"\n";
            }
            return;
        }
    }
    cout<<1<<" "<<(n-1)<<" "<<2<<" "<<(n)<<'\n';
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
