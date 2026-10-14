class Solution {
public:
long solve(vector<int>& v){
    vector<long> dp(v.size()+1);
    if(v.size()==1)
    return v[0];
    dp[0]=v[0];
    dp[1]=max(v[1],v[0]);
    for(int i=2;i<v.size();i++){
        dp[i]=max(dp[i-1],dp[i-2]+v[i]);
    }
    return dp[v.size()-1];
}
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        vector<int> v1,v2;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i!=0)v1.push_back(nums[i]);
            if(i!=n-1)v2.push_back(nums[i]);
        }
        long a1=solve(v1);
        long a2=solve(v2);
        return max(a1,a2);
    }
};
