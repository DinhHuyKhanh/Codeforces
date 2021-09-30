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
#define mp make_pair

void solve()
{
    int n,k;
    string a,b;
    cin>>n>>k>>a>>b;
    int need[31]={0}, have[31]={0};
    for(int i=0;i<n;i++){
        have[a[i]-'a']++;
        need[b[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(have[i] < need[i] || (have[i]-=need[i])%k ){
            cout<<"NO\n";
            return;
        }
        have[i+1] += have[i];
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
