#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    while(n--)
    {
        int t,x;
        //vector<int> b;
        set<int> a;
        cin>>t;
        int b;
        for(int i=0;i<t;i++)
        {
            cin>>x;
            if(i>0&&x==b)
            {
                x=x+1;
            }
            if(i>0&&x<=b)
            {
                x=b;
            }
            b=x;
            a.insert(x);
        }
       cout<<a.size()<<"\n";
    }

return 0;
}
