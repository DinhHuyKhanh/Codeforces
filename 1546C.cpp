#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mk make_pair

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    map<int,map<bool,int>> mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]][i%2]++;
    }
    sort(all(a));
    for(int i=1;i<=n;i++){
        if(i&1){
                if(mp[a[i]][true]){
                    mp[a[i]][true]--;

                }else{
                    cout<<"NO\n";
                    return;
                }
        }else{
            if(mp[a[i]][false]) {
                mp[a[i]][false]--;

            }else{
            cout<<"NO\n";
            return;
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
