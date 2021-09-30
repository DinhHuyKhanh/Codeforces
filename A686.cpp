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
    ll n,x,testcase,res=0;
    cin>>n>>x;
    string s;

    while(n--){
        cin>>s>>testcase;
        if(s=="+"){
            x+=testcase;
        }else{
            if(x<testcase){
             res++;
            }else x -= testcase;
        }
    }
    cout<<x<<" "<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
