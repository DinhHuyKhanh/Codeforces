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
const bool testcase=1;

void solve()
{
    int b,p,f,h,c;
    cin>>b>>p>>f>>h>>c;
    int res=0;
    if(h>c){
        while(b>1 && p>0){
            res+=h;
            b-=2;
            p--;
        }
        while(b>1 && f>0){
            res+= c;
            b-=2;
            f--;
        }
    }else{
        while(b>1 && f>0){
            res+= c;
            b-=2;
            f--;
        }
        while(b>1 && p>0){
            res+=h;
            b-=2;
            p--;
        }
    }
    cout<<res<<"\n";
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
