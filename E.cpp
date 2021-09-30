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
#define  vi(x)  vector<int> x;
#define  pi   pair<int,int> x
#define tup tuple<int,int,int>
#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
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
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;

void solve()
{
    map<string,int> mp;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    s=" "+s;
    ++mp[s];
    ll n=sz(s)-1;

    //while(1){
        for(int i=2;i<=n;i+=2){
            int x= (s[i]-'0')*2;
            if(x<=9){
                s[i]= (x+'0');
            }
            else{
                int t=0;
                while(x){
                    t+=(x%10);
                    x/=10;
                }
                s[i]=(t+'0');
            }
        }

        ++mp[s];
        ll ans=0;
        for(int i=1;i<=n;++i){
            ans+= s[i]-'0';
        }
        if(ans%10==0){
            cout<<"PASS\n";
            return;
        }
        //if(mp[s] >1){
            cout<<"FAIL\n";
           // return;
       // }
    //}
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
