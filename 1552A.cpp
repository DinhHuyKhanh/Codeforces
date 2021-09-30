#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 25.7.2021
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
    int n,res=0;
    cin>>n;
    string s,s1;
    cin>>s;
    s1=s;
    sort(all(s1));
    for(int i=0;i<n;i++){
        if(s1[i]!=s[i]) res++;
    }
    cout<<res<<"\n";
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
