#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;

using ll = long long;
using uint = uint64_t;


void solve()
{
    uint n,sumA=0,res=0,product=0,producted=0;
    cin>>n;
    vector<pair<uint,uint>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        sumA += a[i].first;
    }
    sort(a.begin(), a.end(), [](const std::pair<uint,uint> &left, const std::pair<uint,uint> &right) {
    return left.second < right.second;
    });

    int i=0,j=n-1;
    for( i;i<=j;i++){
       if(a[i].second > product){
        for( j; j>=i;j--){
           if(product + a[j].first < a[i].second){
            product += a[j].first;
            a[j].first = 0;
           }else {
               a[j].first -= (a[i].second - product);
                product = a[i].second;
                break;
           }
        }
       }
       if(a[i].second <= product){
            res+= a[i].first;
            producted += a[i].first;
            product += a[i].first;
       }
    }
    res+= ( product-producted)*2;

    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
