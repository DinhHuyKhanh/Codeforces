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
    int xa,ya ,xb,yb,xf,yf,res=0;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    res = abs(ya-yb) + abs(xa-xb);
    if((xa==xb && xb == xf)){
        res = abs(ya-yb) + abs(xa-xb);
        if(( yf > ya && yf < yb )||( yf <ya && yf > yb)) res+=2;
    }else if(ya == yb && yb == yf){
        if(( xf > xa && xf < xb )||( xf <xa && xf > xb)) res+=2;
    }

    cout<<res<<"\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
