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
set<int> res={1,4,6,8,9};
void solve()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    vector<int> a(11,0);
    map<int,int> mp;
    for(int i=0;i<k;++i){
        ++a[(s[i]-'0')%10];
    }
    for(int i=1;i<10;++i){
        if(a[i]){
            if(res.find(i) != res.end()){
                debugn(1);
                debugn(i);
                return;
            }
        }
    }
     for(int i=1;i<10;++i){
        if(a[i]>1){
            debugn(2);
            string ans="";
            for(int j=0;j<2;++j){
                ans+=i+'0';
            }
            cout<<ans<<'\n';
            return;
        }
    }
    if(a[2] && s[0]!='2'){
            debugn(2);
            string ans="";
            ans+=s[0];
            ans+="2";
            debugn(ans);
            return;
    }
    if(a[5] && s[0]!='5'){
         debugn(2);
            string ans="";
            ans+=s[0];
            ans+="5";
            debugn(ans);
            return;
    }
    if(a[2] && a[7]){
        cout<<2<<'\n'<<27<<'\n';
        return;
    }
     if(a[5] && a[7]){
        cout<<2<<'\n'<<57<<'\n';
        return;
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
