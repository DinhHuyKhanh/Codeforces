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
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.pb(i+1);
    }
    if(n&1){
        for(int i=0;i+1<n;i++){
            swap(arr[i],arr[i+1]), i++;
        }
        swap(arr[n-2],arr[n-1]);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }else{
        for(int i=0;i+1<n;i++){
            cout<<arr[i+1]<<" "<<arr[i]<<" ";
            i++;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<endl;
    }
return 0;
}
