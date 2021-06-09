
#include <bits/stdc++.h>

using namespace std;
int n;
string s;
 void solve(){
    cin>>s;
    cout<<s[0]<<s[1];
    for(int i=3;i<s.size();i++){
        cout<<s[i];
        i++;
    }
    cout<<endl;
 }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--){
     solve();
    }

return 0;
}
