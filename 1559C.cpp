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

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    if(a[0]==1){
        debug(n+1);
        for(int i=1;i<=n;i++){
            debug(i);
        }
    }else if(a[n-1]==0){
        for(int i=1;i<=n+1;i++){
            debug(i);
        }
    }else{
        int id=-1;
        for(int i=0;i+1<n;i++){
            if(a[i]==0 && a[i+1]==1){
                id=i+1;
                break;
            }
        }
        if(id==-1){
            cout<<-1<<'\n';
            return;
        }
       for(int i=1;i<=id;i++){
            debug(i);
       }
       debug(n+1);
       for(int i=id+1;i<=n;i++){
            debug(i);
       }
    }
    endl;
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
