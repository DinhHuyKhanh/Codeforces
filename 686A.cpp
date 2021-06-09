#include<bits/stdc++.h>

using namespace std;

int main(){
    const int smax=101;
ios::sync_with_stdio(0); cin.tie(0);
int t,n;
cin>>t;

while(t--)
{
    cin>>n;
    cout<<n<<" ";
        if(n%2==0)
        {
    for(int i=n-1;i>=1;i--)
    {
       cout<<i<<" ";
    }
        }
        else{
            for(int i=n-1;i>=1;i--)
            {
                if(i==(n+1)/2) cout<<1<<" ";
                else if(i==(1)) cout<<(n+1)/2<<" ";
                else if( i!=(n+1)/2 && i!=1 ) cout<<i<<" ";
            }
        }
    cout<<endl;

}
return 0;
}
