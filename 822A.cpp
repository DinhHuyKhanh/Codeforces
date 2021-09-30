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

int64_t gt(int64_t n) {
    int64_t s = 1;
    for (int64_t i = 1; i <= n; i++)
        s *= i;
    return s;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    a = min(a,b);
    cout<<gt(a)<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
