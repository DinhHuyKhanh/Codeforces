/*
phân tích :
1. Nếu đã đến phòng này rồi thì ghi lại số phút đã ở phòng đấy
2. nếu lần đầu đến phòng này sẽ ghi chú ti < i -> có thể ti trùng nhau
=> để số phòng là tối thiểu : thì cnt ti sẽ có 1 lần là quay lại. Điều này có nghĩa là có nhiều ti
trùng nhau nhưng chỉ có 1 sự quay lại vì nếu quay lại lần 3 sẽ đánh dấu thời gian của lần trước
có thể thấy ti của mỗi lần quay lại là khác nhau
->  cnt  = max(cnti - 1, 0);
*/
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
const bool testcase=0;
int a[200*1000+10];
void solve()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    int res=1;
    for(int i=0;i<=n;i++){
        res+= max((a[i]-1),0);
    }
    cout<<res;
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
