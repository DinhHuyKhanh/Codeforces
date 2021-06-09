#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long maxs;
    int t;
    cin>>t;
    while(t--)
    {
            int n,x;
            cin>>n>>x;
            maxs=0;
            long long a[n],b[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                maxs += b[i]=a[i];
            }
            int i=0;
            while(true)
            {
                if(i==n) i=0;
                if(a[i]%x!=0)
                {
                    break;
                }
                a[i] /= x;
                maxs += b[i];
                i++;

            }
            cout<<maxs<<"\n";
    }

return 0;
}

