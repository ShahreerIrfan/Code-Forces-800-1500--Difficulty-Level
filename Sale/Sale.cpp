#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m,vector<int>arr){
    sort(arr.begin(),arr.end());
    int earn = 0;
    for(int i=0;i<n;i++){
            if(arr[i]<0){
                earn+=abs(arr[i]);
                m--;
            }
        if(m==0){
            break;
        }
    }
    cout<<earn<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(n,m,arr);
}

