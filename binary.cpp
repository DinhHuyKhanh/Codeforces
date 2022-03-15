#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 12/2/2022
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef deque<int> dq;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define tup tuple<int,int,int>
#define read(x) for(auto &i: x) cin>>i;
#define out(x) for(auto &i: x) cout<<i<<" ";
#define pb push_back
#define pf push_front
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define f first
#define s second
#define prec(n) fixed<<setprecision(n)
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
#define  prq priority_queue<int>
#define prgg priority_queue<int, vector<int>, greater<int> >
#define TC  0
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

/*
    bài toán: tìm các giá trị trong khoảng [l , r]  của 1 mảng đã sắp xếp;
*/

void solve()
{
    int n, l, r;
    cin>>l>>r;
    vector<int> a;
    for(int i=1;i<=10;++i){
        a.push_back(i);
    }
    for(int i=10;i<20;++i){
        a.pb(i+10);
    }

    auto it = lower_bound(a.begin(),a.end(),l);
    cout<<*it;
    //auto up = upper_bound(a.begin(), a.end(), r) - a.begin();

    //for(int i=it; i<up; ++i){
      //  cout<<a[i]<<" ";
    //}

    /*
    int left = 0, right = a.size()-1, mid;
    int vande1=0;
    // vấn đề 1: tìm các phàn tử bé nhất lớn hơn L
    while( left <= right ){
        mid = (left + right)/2;
        if( ok() ){ // l: cận trái của đoạn [l, r]
            vande1 = mid;
            right = mid-1;
        }else{
            left = mid +1;
        }
    }*/
    /*

    // vấn đề 2: tìm phần tử lớn nhất bé hơn R trong [L, R ]
    int vande2 = -1;
    left = 0, right = a.size()-1;
    while( left <= right ){
        mid = (left + right)/2;
        if( a[mid] <=r){ // r: cận trái của đoạn [l, r]
            vande2 = mid;
            left = mid +1;
        }else{
            right = mid -1;
        }
    }
    for(int i=vande1; i<= vande2; ++i){
        cout<<a[i]<<" ";
    }
    */

    // Hàm : lower_bound() // tìm giá trị bé hơn hoặc bằng giá trị truyền vào.
    // nếu nó có giá l trả về giá trị l ngược lại thì nó trả về giá trị bé hơn
    //auto it  = lower_bound(a.begin(), a.end(), l) - a.begin();
    //cout<<it;


    // hàm upper_bound()
    // trả về con trỏ vị trí phần tử lớn hơn giá trị truyền vào :
    // lớn hơn giá trị truyền vào
   // auto up = upper_bound(a.begin(), a.end(), r);
    //cout<<*up<<" up\n";


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(TC){
        int T;
        cin>>T;
        while(T--) solve();
    }else{
        solve();
    }
return 0;
}
