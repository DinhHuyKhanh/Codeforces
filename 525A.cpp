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

int hashing[1000000];
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    s= " "+s;
    map<int,int> mp;
    hashing[0]=0;
    for(int i=1;i<=2*n-2;i++){
       if(i&1){
            hashing[i] = s[i]-'a' + 1;
       }else{
            hashing[i] = s[i]-'A'+1;
       }
    }
    int res=0;
    for(int i=1;i<=2*n-2;i++){
        if(i&1){
            mp[hashing[i]]++;
        }else{
            if(mp[hashing[i]]==0) res++;
            else mp[hashing[i]]--;
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
