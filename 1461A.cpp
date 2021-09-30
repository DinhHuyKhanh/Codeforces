#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
#define  ll = long long;
#define  ull = unsigned long long;
#define  vi = vector<int>;
#define  pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=1;
int n,k;
string s="abc";
void solve()
{
    cin>>n>>k;
    int j=0;
    while(n){
        int t=min(n,k);
        for(int i=0;i<t;i++){
            cout<<s[j%3];
        }
        n-=t;
        j++;
    }
    cout<<'\n';
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
