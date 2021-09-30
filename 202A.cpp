#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s[s.size()-1];
    for(int i=s.size()-2;i>=0;i--){
        if(s[i]==s[i+1]){
            cout<<s[i];
        }else{
        break;}
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
