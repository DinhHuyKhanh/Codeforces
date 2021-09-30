#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=1;

void solve()
{
    int n,k;
    cin>>n>>k;
    if(k*2+1 >n){
        cout<<-1<<"\n";
        return;
    }
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    int j=0;
    for(int i=2;j<k;i+=2){
        swap(a[i],a[i+1]);
        j++;
    }
    //sort(a.begin()+2*k+1,a.end());
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
