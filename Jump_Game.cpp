class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            mx=max(mx,nums[i]);
            mx--;
            if(mx==-1) return false;
        }
        
        return true;
    }
};
