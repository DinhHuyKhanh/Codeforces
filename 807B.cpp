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
const int mod = (int) 475;

void solve()
{
    int p,x,y;
    cin>>p>>x>>y;
    int res=0,poin=x;

      while(poin >=y){
        set<int> st;
        int i= (poin/50)%mod;
        st.insert(i);
        for(int j=0;j<25;++j){
            i= (i*96+42)%mod;
           if(i+26==p){
             debugn(0);
             return;
           }
        }
        poin-=50;
    }
    poin=x;
    while(poin){
        set<int> st;
        int i= (poin/50)%mod;
        st.insert(i);
        for(int j=0;j<25;++j){
            i= (i*96+42)%mod;
            if(i+26 == p){
                res=(poin-x+50)/100;
                debugn(res);
                return;
            }
        }
        poin+=50;
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
