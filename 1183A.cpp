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
    for(int i=n;;i++){
        int k=i,x=0;
        while(k!=0){
            x+=k%10;
            k/=10;
        }
        if(x%4==0){
            cout<<i;
            return;
        }
    }





}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
