#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins = insert;
#define endl  cout<<'\n'
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
#define debugn(n) cout<<(n)<<"\n";
#define testcase 1
const int mod = (int) 1e9 + 7;
int n;
string s;
void solve()
{
    cin>>n;
    cin>>s;
    if(s[0]=='?'){
        string a,b;
        a=s,b=s;
        a[0]='R';
        b[0]='B';
        int cnt1=0,cnt2=0;
        for(int i=1;i<n;i++){
            if(a[i]=='?'){
                if(a[i-1]=='B'){
                    a[i]='R';
                }else a[i]='B';
            }
            if(a[i]==a[i-1]) cnt1++;
            if(b[i]=='?'){
                if(b[i-1]=='R'){
                    b[i]='B';
                }else b[i]='R';
            }
            if(b[i]==b[i-1]) cnt2++;
        }
        int cnt=min(cnt1,cnt2);
        if(cnt1==cnt){
            cout<<a<<'\n';
        }else{
        cout<<b<<'\n';
        }

    }else{
        for(int i=1;i<n;i++){
            if(s[i]=='?'){
                if(s[i-1]=='B'){
                    s[i]='R';
                }else s[i]='B';
            }
        }
        cout<<s<<'\n';

    }
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
