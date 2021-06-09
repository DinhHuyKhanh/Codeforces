
#include <bits/stdc++.h>

using namespace std;
string s,xau="0";
int dem1=0,dem0=0;

void solve(){
    cin>>s;
     dem0=0,dem1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==xau[0]) dem0++;
        else dem1++;
    }
    if(dem1==s.size() || dem0==s.size()) {
        cout<<"YES\n";
        return;
    }
    dem0=0, dem1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i-1]){
            if(s[i]==xau[0]){
                dem0++;
                if(dem1>=1){
                    cout<<"NO\n";
                    return;
                }
            }else{
                dem1++;
            }
            i++;
        }
    }
    cout<<"YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n--){
        solve();
    }


return 0;
}
