#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int res=0;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="Icosahedron") res=res+20;
        else if(s=="Cube") res=res+6;
        else if(s=="Octahedron") res= res+8;
        else if(s=="Tetrahedron") res= res+4;
        else if(s=="Dodecahedron") res= res+12;
     }
     cout<<res;
return 0;
}
