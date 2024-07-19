class Solution {
public:
    int rob(vector<int>& nums) {
    int n=nums.size();
    vector<int> a(n);
    a[0]=nums[0];

    for(int i=1; i<n; i++)
    {
        int pres=nums[i];
        if(i>1) pres+=a[i-2];
        int npres=a[i-1];
        a[i]=max(pres,npres);
    }
    return a[n-1];
    }
};
