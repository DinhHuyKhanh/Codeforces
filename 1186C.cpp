#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;
/*
01100010
00110

f(01100,00110) = 2
f(11000,00110) = 4
f(10001,00110) = 4
f(00010,00110) = 1
=>3
-------------
1010111110
0110

f(1010,0110) = 2
f(0101,0110) = 2
f(1011,0110) = 3
f(0111,0110) = 1
f(1111,0110) = 2
f(1111,0110) = 2
f(1110,0110) = 1

1010101101
1011
f(1010,1011)= 1
f(0101,1011) = 3
f(1010,1011) = 1
f(0101,1011) = 3
f(1011,1011) = 0
f(0110,1011) = 3
f(1101,1011) = 2

quy nạp ==> nếu bit 1 của chuỗi con C + số bit 1 của chuỗi B ==>  thì sum(cntC + cnt B) mod 2  = 0 =>>>> thỏa mãn
*/
void solve()
{
    string a,b;
    cin>>a>>b;
    int N=a.size(), M = b.size(),bitB=0;
    vector<int> sum_A(N+1,0);
    for(int i=0;i<M;i++){
        bitB += b[i]-'0';
    }
    for(int i=0; i < N ;i++){
        sum_A[i+1] = sum_A[i] + a[i] - '0';
    }

    int ans=0,sum;
    for(int i=0; i+M<N+1; i++)
    {
        sum = sum_A[i+M] - sum_A[i] + bitB;
        if(sum%2==0) ans++;
    }
    cout<<ans;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
