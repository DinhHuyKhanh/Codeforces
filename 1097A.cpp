#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    string s,x,res="NO";
    cin>>s;
    int stt=0;
    for(int i=0;i<5;i++){
            cin>>x;
        if(stt==0){
            if(s[0]==x[0] || s[1]==x[1]){
                res="YES";
                stt=1;
            }
        }
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
