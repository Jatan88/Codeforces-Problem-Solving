/*

Solution By Jatan Shah
CF Handle : Jatan88
Problem : 1257B Magic Stick
Problem Link : https://codeforces.com/problemset/problem/1257/B
Status : Accepted

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        if(x==1 && y==1) cout<<"YES"<<"\n";
        else if((x==2||x==3)&&y<4) cout<<"YES"<<"\n";
        else if(x>3) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        
    }
    return 0;
}
