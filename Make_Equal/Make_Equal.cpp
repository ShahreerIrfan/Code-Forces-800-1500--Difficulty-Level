#include<bits/stdc++.h>
using namespace std;
void solve(int n,vector<int>arr){
    double sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    double double_sum = sum/(double)n;
    int int_sum = sum/n;
    if(double_sum == int_sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(n,arr);
    }
}