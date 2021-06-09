#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s,res="";
    int n;
    cin>>n>>s;

    for(int i=0;i<=4;i++){
        if(((s.substr(0,i)) + s.substr(n-4+i,4-i)) == "2020"){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();

return 0;
}
