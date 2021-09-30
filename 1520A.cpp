#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int stt=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            for(int j=i+1;j<n;j++){
                if(s[i-1]==s[j]){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";


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
