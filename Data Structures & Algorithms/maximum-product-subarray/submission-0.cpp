class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
        int minprod=nums[0],maxprod=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            int curr=nums[i];
            if(curr<0)
            swap(minprod,maxprod);
            minprod=min(nums[i],minprod*curr);
            maxprod=max(nums[i],curr*maxprod);
            res=max(res,maxprod);
        }
        return res;
    }
};
