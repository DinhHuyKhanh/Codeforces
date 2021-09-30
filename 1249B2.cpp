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
int a[200010],par[200010], Rank[200010];

int root(int x){
    return par[x]? (par[x] = root(par[x])) : x;
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i], par[i]=0, Rank[i]=1;
    }
    for(int i=1;i<=n;i++){

        if(Rank[root(i)]==1){
            int j=a[i];
            while(j!=i){
                par[j]=i;
                Rank[i]++;
                j=a[j];
            }
        }
        cout<<Rank[root(i)]<<" ";
    }
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
