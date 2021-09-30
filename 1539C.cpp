#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    uint n,k,x,hs,res=1;// so luong sv ban dau, k: so luong sinh vien moi them, x: do chenh lech
    cin>>n>>k>>x;
    vector<uint> a;
    for(int i=0;i<n;i++){
        cin>>hs;
        a.push_back(hs);
    }
    sort(a.begin(),a.end());

    vector<uint> range;

    for(int i=0;i<n-1;i++){
            hs=a[i+1]-a[i];
        if(hs>x){
            range.push_back((hs-1)/x);
            res++;
        }
    }
    int N = range.size();
    sort(range.begin(),range.end());
    for(int i=0;i<N;i++)
    {
        if(range[i]<=k){
            k-=range[i];
            res--;
        }else{
            break;
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
