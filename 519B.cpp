#include <bits/stdc++.h>

using namespace std;

void solve()
{
    map<int,int> mp1,mp2,mp3;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        mp1[x]++;
    }
    for(int i=0;i<n-1;i++){
        cin>>x;
        mp2[x]++;
    }
    for(int i=0;i<n-2;i++){
        cin>>x;
        mp3[x]++;
    }

    for(auto &x : mp1){
        if(mp2[x.first] != mp1[x.first]){
            cout<<x.first<<"\n";
        }
    }

    for( auto &x : mp2){
         if(mp3[x.first] != mp2[x.first]){
            cout<<x.first<<"\n";
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
