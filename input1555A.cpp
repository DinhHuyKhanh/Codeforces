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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=10000;

    fstream f;
    f.open("F://lap trinh/CC++/codeforces/inp1555A5.txt",ios::out);
    f<<t;
    f<<"\n";
	for(ll i=1e15+50000;i<1e15+60000;i++){
        f<<i;
        f<<"\n";
	}
	f.close();

return 0;
}
