#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,x;
        cin>>n>>d;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        if(a[0]>d || a[1]>d) cout<<"NO\n";
        else
        {
            int tong= a[0]+a[1];
            if(tong<=d)
            {
                cout<<"YES\n";
            }
            else
            {
                if(a[a.size()-1]<=d) cout<<"YES\n";
                else cout<<"NO\n";

            }
        }

    }
return 0;
}
