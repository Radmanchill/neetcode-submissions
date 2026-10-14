class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1,ans=0;
        while(l<r){
            int ar=min(h[l],h[r])*(r-l);
            ans=max(ar,ans);
            if(h[l]<h[r])l++;
            else
            r--;
        }
        return ans;
    }
};
