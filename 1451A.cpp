#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
        return;
    }
    if(n==2){
        cout<<1;
        return;
    }
    if(n==3){
        cout<<2;
        return;
    }
    if(n&1){
        cout<<3;
    }else{
        cout<<2;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<"\n";
    }
return 0;
}
