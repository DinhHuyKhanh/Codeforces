#include<bits/stdc++.h>

using namespace std;

int chiadu(int a,int b){
    int c = a%b;
    if(c==0) return 0;
return (b-c);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cout<<chiadu(a,b)<<"\n";
    }


    return 0;
}
