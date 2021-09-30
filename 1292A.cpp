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
set<int> st1,st2;
int a[3][100000+10];
bool oke(){
    if(sz(st1)<sz(st2)){
        for(auto x: st1){
            if(a[2][x-1]  || a[2][x] || a[2][x+1]){
                return 0;
            }
        }
    }else{
         for(auto x: st2){
            if(a[1][x-1]  || a[1][x] || a[1][x+1]){
                return 0;
            }
        }
    }
    return 1;
}
void solve()
{
    int n,q;
    cin>>n>>q;
    bool bad=1;
    int r,c;
    while(q--){
        cin>>r>>c;
        if(r&1){
            if(a[r][c]){
                a[r][c]=0;
                st1.erase(c);
                if(a[2][c] || a[2][c-1] || a[2][c+1]){
                        bad=oke();
                }
            }else{
                a[r][c]=1;
                st1.insert(c);
                if(a[2][c] || a[2][c-1] || a[2][c+1]){
                        bad=0;
                }
            }
        }else{
            if(a[r][c]){
                a[r][c]=0;
                st2.erase(c);
                if(a[1][c] || a[1][c-1] || a[1][c+1]){
                        bad=oke();
                }
            }else{
                a[r][c]=1;
                st2.insert(c);
                if(a[1][c] || a[1][c-1] || a[1][c+1]){
                        bad=0;
                }
            }

        }
        cout<<(bad? "Yes\n":"No\n");
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
