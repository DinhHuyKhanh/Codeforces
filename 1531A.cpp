#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,stt=1;
    cin>>n;
    string s,res="blue";
    while(n--){
        cin>>s;
        if(s=="lock"){
            stt=0;
        }else if(s=="unlock"){
            stt=1;
        }else{
            if(stt==1){
                res=s;
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
