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
#define  pi(x)   vector<pair<int,int>> x;
#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) rbegin(x),rend(x)
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
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int cnt1=0,cnt2=0,res=0;
    for(int i=0;i<n;++i){
        if(s[i]=='a'){
            ++cnt1;
        }else ++cnt2;

        if(i&1){
            if(cnt1==cnt2) continue;
            else{
                if(cnt1>cnt2){
                    s[i]='b';
                    ++cnt2,--cnt1;
                }else{
                    s[i]='a';
                    ++cnt1,--cnt2;
                }
                ++res;
            }
        }
    }
    debugn(res);
    debugn(s);



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
