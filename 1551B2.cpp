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
    cin>>n>>k;
    int a[n+1]={0} , used[200001]={0};
    vector<pair<int,int>> pi(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pi[i]= {a[i],i};
        used[a[i]]++;
    }

    sort(all(pi));
    int cnt = 1, cnt2=0;
    for(int i=1;i<=n;i++){
       if(used[pi[i].f] >k){
            a[pi[i].s] = 0;
            used[pi[i].f]--;
       }else{

        if(cnt>k) cnt=1;
        a[pi[i].s] = cnt;
        cnt++;
       }

    }
    for(int i=n;i>0;i--){
        if(a[pi[i].s] != k) a[pi[i].s] = 0;
        else break;
    }

    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
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
