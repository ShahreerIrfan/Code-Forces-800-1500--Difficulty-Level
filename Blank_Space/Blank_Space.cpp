#include<bits/stdc++.h>
using namespace std;
void solve(int n,int arr[]){
    int first_time = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            first_time++;
            if(arr[i+1]==1){
                
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,arr);

    }
}