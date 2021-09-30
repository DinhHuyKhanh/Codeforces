#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 18.06.2021
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    string s1,s2,n;
    cin>>n>>s1>>s2;
    int N = s1.size(),ans=0,number_step;
    for(int i=0;i<N;i++){
        number_step =  abs(s1[i]-s2[i]);
        ans += min(number_step,10-number_step);
    }
    cout<<ans<<"\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
