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

int a[300];
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];


    for(int i=1;i<=n;i++){
        set<int> st;
        st.insert(a[i]);
        int j=a[i];
        while(st.find(a[j]) == st.end()){
            st.insert(a[j]);
            j=a[j];
        }
        cout<<st.size()<<" ";
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
