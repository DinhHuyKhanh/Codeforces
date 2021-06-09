#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s,x,y;
    vector<int> a;
    vector<int>b;
    cin>>s>>n;
    for(int i=0;i<n;i++){

        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    while(1){
            int status =0;
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]<s){
            s+=b[i];
            status=1;
            a.erase(a.begin()+i);
            b.erase(b.begin()+i);
            }
        }
            if(status==0){
            break;
            }
    }
    if(a.size()==0) cout<<"YES";
    else cout<<"NO";





return 0;
}
