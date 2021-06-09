#include <bits/stdc++.h>

using namespace std;

int n;

void solve()
{
    int chan=0,le=0,res;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2 != i%2){
            if(i%2==0){
                chan++;
            }else{
            le++;
            }
        }
    }
    res= (le==chan)? le : -1;
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
