
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n,x,res=0;
    cin>>n;
    vector<int> vt;
    cin>>x;
    vt.push_back(x);
    for(int i=1;i<n;i++)
    {
        cin>>x;
        sort(vt.begin(),vt.end());
        if( x < vt[0] || vt[vt.size()-1] <x) {
                res++;
        }
        vt.push_back(x);
    }
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
