
#include <bits/stdc++.h>

using namespace std;
map<string,int> mp;
int n;
string s;
void solve(){
    cin>>s;
    if(mp[s]==0){
        mp[s]++;
        cout<<"OK\n";
        return;
    }else{
        int a = mp[s];
        cout<<s<<mp[s]<<endl;
        mp[s]++;
        return;
    }
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
