#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 30/07/2021
* @function : B
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
    int w,h;
    cin>>w>>h;
    pair<int,int> a,b,c,d,x;
    cin>>a.f>>a.s>>b.f>>b.s;
    c= {b.f, a.s};
    d= {a.f,b.s};
    cin>>x.f>>x.s;
    if( (a.s + (h-b.s) < x.s) && ( a.f + (w-b.f) ) < x.f ){
        cout<<-1<<"\n";
        return;
    }

    float ans=1e9,res=1e9;
    if((a.s + (h-b.s) >= x.s)){
        ans = min ( (a.s < x.s) ? x.s - a.s : 0 ,  ( (h-b.s) < x.s )? x.s - (h-b.s) : 0 );
    }
    if(( a.f + (w-b.f) ) >= x.f )
         res = min ( (a.f < x.f) ? x.f - a.f : 0 ,  ( (w-b.f) < x.f )? x.f - (w-b.f) : 0 );

    res= min(ans,res);
    cout<<fixed<<setprecision(9)<<res<<"\n";
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
