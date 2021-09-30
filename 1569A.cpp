#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 27/09/2021
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
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
// sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int cntA=0,cntB=0,l=-1,r=-1;
    for(int i=0;i<n;++i){
        if(s[i]=='a'){
            ++cntA;
        }else ++cntB;

        if(cntA && cntB){
            r=i+1;
            if(cntA==cntB){
                cout<<1<<" "<<r<<'\n';
                return;
            }
            if(cntA>cntB){
                int c=cntA-cntB;
                for(int j=0;j<i && c!=0 ;++j){
                    if(s[j]=='a') --c,l=j+2;
                }
            }else{
                int c=cntB-cntA;
                for(int j=0;j<i && c!=0 ; ++j){
                    if(s[j]=='b') --c,l=j+2;
                }
            }
            cout<<l<<" "<<r<<'\n';
            return;
        }
    }
    cout<<-1<<" "<<-1<<endl;
}
void huykhanh(){
    int T;
    cin>>T;
    //T=1;
    while(T--) solve();
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    huykhanh();
return 0;
}
