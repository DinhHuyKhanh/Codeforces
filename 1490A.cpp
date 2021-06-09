#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<int> vt;
    for(int i=0;i<n;i++){
        cin>>k;
        vt.push_back(k);
    }
    int res=0;
    for(int i=0;i<vt.size()-1;i++){
        if((float)max(vt[i],vt[i+1])/(float)min(vt[i],vt[i+1])>2.0){
            if(vt[i]<vt[i+1]){
                k=2*vt[i];
                vt.insert(vt.begin()+i+1,k);
                res++;
            }else{
                k = vt[i]%2==0?vt[i]/2:1+vt[i]/2;
                res++;
                vt.insert(vt.begin()+i+1,k);
            }
        }
    }

    cout<<res<<endl;
    }
return 0;
}
