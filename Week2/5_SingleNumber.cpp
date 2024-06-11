class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size();
        if(k==1) return nums[0];
        for(int i=0; i<k; i++)
        {
            if(i==0 && nums[i]!=nums[i+1]) return nums[i];
            if(i==k-1 && nums[i]!=nums[i-1]) return nums[i];
            if(i>0 && i<k-1 && nums[i]!=nums[i-1] && nums[i]!=nums[i+1]) return nums[i];
        }
    return -1;
    }

};
