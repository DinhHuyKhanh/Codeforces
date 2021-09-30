#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,x,chan,le;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x%2]++;
        if(x%2==0) chan=i;
        else{
            le=i;
        }
    }
    if(mp[0]==1){
        cout<<chan+1;
    }else{
        cout<<le+1;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
