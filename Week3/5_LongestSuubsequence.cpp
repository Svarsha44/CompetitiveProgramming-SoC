class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        int n = nums.size();
        int m = queries.size();
        
        sort(nums.begin(),nums.end());
        int total = 0;
        vector<int> sums;
        
        for(int i=0;i<n;i++)
        {
            total += nums[i];
            sums.push_back(total);
        }
        
        vector<int> vec(m,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(sums[j] <= queries[i]) vec[i] = j+1;
                else break;
            }
        }
        return vec;
    }
};
