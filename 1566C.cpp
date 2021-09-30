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
    int n;
   string a,b;
   cin>>n>>a>>b;
   /*for(int i=0;i<n;++i){
    if(a[i]=='0'){
        a[i]='1';
    }else{
        a[i]='0';
    }
    if(b[i]=='0'){
        b[i]='1';
    }else{
        b[i]='0';
    }
   }*/
    bool bad = false , bad1=false;
    ll res=0;
    for(int i=0;i<n;++i){
        if(a[i]!= b[i]){
            res+=2;
            if(bad){
                res+=1;
            }
            bad=false, bad1=false;
        }else{
            if(a[i]=='1'){
                if(bad){
                    res+=2;
                    bad=false;
                }else bad1=true;

            }else{ // a=0, b=0;
                if(bad1){
                    res+=2;
                    bad1=false;
                }else{
                    if(bad){
                        res+=1;
                    }else{
                        bad=true;
                    }
                }
            }
        }
    }
    if(bad) res+=1;
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
