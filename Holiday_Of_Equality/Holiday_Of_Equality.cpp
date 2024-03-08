#include <bits/stdc++.h>
using namespace std;
void solve(int n,vector<int> nums)
{
    int sum = 0;
    int max = nums[0]; 
    for (int i = 1; i < nums.size(); i++){ 
        if (nums[i] > max){              
            max = nums[i]; 
        }
    }
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    int toEqual = n * max;
    int result = toEqual - sum;
    cout<<result<<endl;
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    solve(n,nums);
    return 0;
}