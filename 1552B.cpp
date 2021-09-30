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
int n;
const int N=60000;
int a[N][5];
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int idx=0,cnt=0;
    for(int i=1;i<n;i++){
        cnt=0;
        for(int j=0;j<5;j++){
            if(a[i][j] < a[idx][j]) cnt++;
        }
        if(cnt>2) idx=i;
    }
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<5;j++){
            if(a[i][j] < a[idx][j]) cnt++;
        }
        if(cnt>2){
            debugn(-1);
            return;
        }
    }
    debugn(idx+1);
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
