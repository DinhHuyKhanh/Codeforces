
#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,m,x;
    cin>>n>>m;
    map<int,int> mp; // tạo 1 map<int,int> lưu kết quả modul  của mảng x%m
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x%m]++;
    }
    int res=0;

    for(auto &x: mp){
        if(x.first == 0 ) res++; // các modul = 0 được lưu vào 1 mảng
        else if(2*x.first == m ) res++; // các modul mà nhân 2 = m được lưu vào 1 mảng
        else if( 2*x.first < m || mp.find(m - x.first) == mp.end()){ // còn lại nếu mà 2*x nhỏ hơn m hoặc không tìm thấy giá trị mà tổng của nó =m
            int a = x.second, b= mp[m-x.first]; //  lấy số lượng x  và số lượng của số mà tổng của nó = m
            res += 1 + max(0,abs(a-b)-1); // nếu mà không tìm thấy số đối xứng hay tìm thấy ta cũng đều lưu nó vào 1 mảng
            // tối đa ta có được 1 mảng lưu hiện tại và  max của (0,|a-b|-1) vd :arr= a b a  hoặc b a b
        }
    }
    cout<<res<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();


return 0;
}
