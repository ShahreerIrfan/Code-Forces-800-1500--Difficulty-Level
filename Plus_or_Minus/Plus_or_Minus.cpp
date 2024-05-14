#include<bits/stdc++.h>
using namespace std;
void solve(int a,int b, int c){
    if(a+b==c){
        cout<<"+"<<endl;
    }
    else{
        cout<<"-"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }
}