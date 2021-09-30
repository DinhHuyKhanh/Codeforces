#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,res=0,res1=0,res2=0;
    cin>>n;
    vector<int> a(n);
    for(auto &x : a) cin>>x;
    if(a[0]==1) res1=1;
    else res2=1;

    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            res=max(res,min(res1,res2));
            if(a[i]==1) res1=0;
            else res2=0;
        }
        if(a[i]==1){
            res1++;
        }else res2++;
    }
    res=max(res,min(res1,res2));
    cout<<2*res;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
