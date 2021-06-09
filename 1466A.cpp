#include<bits/stdc++.h>

using namespace std;

    float dientichtamgiac(int b){
        return (float)(b/2.0);
    }
    int tinhtoan(int b[], int t){
        set<float> a;
        for(int i=0;i<t-1;i++)
        {
            for(int j=i+1;j<t;j++)
            {
                a.insert(dientichtamgiac(b[j]-b[i]));
            }
        }
        return a.size();
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
            int t;
            cin>>t;
            int b[t];
        for(int i=0;i<t;i++)
        {
            cin>>b[i];
        }
        cout<<tinhtoan(b,t)<<"\n";
    }
return 0;
}
