#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  cout<<'\n'
#define  vi(x)  vector<int> x;
#define  pi(x)   vector<pair<int,int>> x;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x),rend(x);
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 1
const int mod = (int) 1e9 + 7;
/*
    y/c : tìm các giá trị k : breaks serve.
    người giao bóng sẽ thay đổi theo mỗi trận đấu
    số lần break ít nhất là d= abs( a- b) /2  để những trận đấu còn lại cân bằng
    lúc này đã diễn ra 2*d chận đấu
    còn lại a+b - 2*d trận đấu
    a+b - 2*d chẵn: thì số lần break phải chẵn lần để đảm bảo số trận
    a+ b - 2*d lẻ : thì số lần break phải lẻ thì đảm bảo số trận
    biết 2*d là số chẵn
    vậy a+b chẵn thì a+b-2*d chẵn
    ngược lại a+b lẻ thì a+b-2*d sẽ lẻ.

    ví dụ
    3 2
     B giao -> B - thua - +1 break   => A = 1  B = 0 ;
     lúc này A và B = nhau
     khi đó 2 người có thể giao bóng thua mà vẫn đảm bao số trận thắng


     vd2 :
     2 4
     | a- b |/2 = 2 ;
     B giao -> B thắng :  0 : 1
     A giao : B thắng : +1 :brk : 1: 1
     B giao : B thắng:   + 0  : 1: 2
     A  : A  -> 2 :2
     B : B -> 2 : 3 => 1 break;

     A -> B :  + 1 : 0 : 1
     B -> B :  +0 : 0 : 2
     A -> A : + 0 : 1: 2
     B -> A : +1 : 2 : 2
     B -> B : +1 :  2 : 3
     => 3 break;

     A-> B : +1 -> 0 : 1
     B -> A : +1 -> 1: 1
     A-> B : +1 -> 1: 2
     B -> A : +1 -> 2: 2
     A-> B : +1 -> 2: 3
     => 5 break;

*/
void solve()
{
    int a,b,n,d;
    cin>>a>>b;
    n=a+b;
    d=abs(a-b)/2;
    vector<int> res;
    if(n&1){
        for(int i=0;d+i<= n-d;++i){
            res.pb(d+i);
        }
    }else{
        for(int i=0;d+i<= n-d;i+=2){
            res.pb(d+i);
        }
    }
    debug(sz(res));
    for(auto i: res){
        debug(i);
    }
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
