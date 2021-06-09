#include<bits/stdc++.h>
#define NAME""
using namespace std;


int main(){
int a[10][10];
int dem=0;
int vth,vtc;

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1) {vth=i; vtc=j;}
        }
dem= abs(2-vth) + abs(2-vtc);
cout<<dem;
return 0;
}
