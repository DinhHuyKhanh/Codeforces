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
    int n,k;
    string s;
    cin>>n>>k>>s;
    int cnt=0,res=0;
    int i;
    s=" "+s;
    for( i=1;i<=n;i++){
        if(s[i]=='*') {
            s[i]='x';
            res++;
            break;
        }
    }
    int j;
    for(j=n;j>i;--j){
        if(s[j]=='*'){
            res++;
            s[j]='x';
            break;
        }
    }
    cnt=0;
    while(i<j){
        if(s[i]=='x'){
            cnt=0;
            i++;
        }else cnt++,i++;
        if(cnt==k){
           while(i--){
                if(s[i]=='*'){
                    ++res;
                    s[i]='x';
                    break;
                }
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
