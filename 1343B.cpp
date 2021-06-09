#include <bits/stdc++.h>

using namespace std;
vector<long long> even, odd, arr1(10e6),arr2(10e6);
int t,n;
void push(){
    int j=1;
    for(int i=1;i<10e5;i++){
        odd.push_back(i);
        arr1[j] = i + arr1[j-1];
        i++;
        j++;
    }
     j=1;
    for(int i=2;i<10e5;i++){
        even.push_back(i);
        arr2[j] = i+ arr2[j-1];
        i++;
        j++;
    }
}
void solve(){
    cin>>n;
    if((n/2)%2==1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=0;i<n/2;i++){
        cout<<even[i]<<" ";
    }
    for(int i=0;i<n/2 -1 ;i++){
        cout<<odd[i]<<" ";
    }
    cout<<arr2[n/2]- arr1[n/2-1]<<"\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    push();
      cin>>t;
    while(t--)
    {
        solve();
    }

return 0;
}
