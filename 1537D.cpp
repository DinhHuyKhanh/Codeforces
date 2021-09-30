#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

int factory(int n){
    vector<int> ans;
    while(n>1)
    {
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0)
            {
                ans.push_back(i);
                n/=i;
            }
        }
    }
    if(ans.size()==0) ans.push_back(n);
    return ans[ans.size()-1];
}
void solve()
{
    int n,d=0;
    cin>>n;

    while(1){

        int ans= factory(n);
        if(ans==n){
            if(d%2==1){
                cout<<"Alice";
                return;
            }else{
                cout<<"Bob";
                return;
            }
        }
        n -= ans;
        d++;
    }


}
int main() {
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }

return 0;
}
