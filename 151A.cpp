#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int res=0,res1,res2,res3;
    res1= (k*l/nl)/n;
    res2=(c*d)/n;
    res3 = (p/np)/n;
    res= min(res1,min(res2,res3));
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
