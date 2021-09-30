#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=0;
/*
    Andrew : green;
    Dmitry : green , purple

*/
void solve()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    if(x>a){
        cout<<"NO\n";
        return;
    }else a-=x;
    if(a+b <y){
        cout<<"NO\n";
        return;
    }else{
        int k=min(a,y);
        a-=k;
        y-=k;
        b-=y;
    }

    if(a+b+c< z){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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
