#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    int n,x=0,res=0;
    string s;
    cin>>n>>s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    res+= mp['L'] + mp['R'] +1;
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
