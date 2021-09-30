#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,sum=0;
    cin>>n;
    vector<int> res;
    for(int i=1;i<=n;i++){
        if(sum + i == n){
            res.push_back(i);
            break;
        }else{
            if(sum + i > n){
                res[res.size()-1] += n-sum;
                break;
            }else{
                res.push_back(i);
                sum+=i;
            }
        }
    }

    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
