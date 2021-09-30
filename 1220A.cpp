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
    int z=0,e=0,o=0,r=0,n=0,nu;
    string s;
    cin>>nu>>s;
    for(int i=0;i<nu;i++){
        if(s[i]=='n') n++;
        else if(s[i]=='e') e++;
        else if(s[i]=='o') o++;
        else if(s[i]=='r') r++;
        else if(s[i]=='z') z++;
    }
    int res= min(o,min(n,e));
    for(int i=0;i<res;i++) cout<<1<<" ";
    o-=res, n-=res, e -= res;
    res = min (z,min(e,min(r,o)));
    for(int i=0;i<res;i++){
        cout<<0<<" ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
