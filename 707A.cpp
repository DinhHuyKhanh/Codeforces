#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,m;
    cin>>n>>m;
    map<char,int> mp;
    char s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s;
            mp[s]++;
        }
    }
    if(mp.find('C')!=mp.end() || mp.find('M') != mp.end() || mp.find('Y') != mp.end()){
        cout<<"#Color";
        return;
    }
    cout<<"#Black&White";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
