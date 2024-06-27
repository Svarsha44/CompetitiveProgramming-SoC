class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int indexleft=0, indexright=0;
        vector<int>merged;

        while(indexleft<nums1.size()&&indexright<nums2.size())
        {
            if(nums1[indexleft]<nums2[indexright])
            {
                merged.push_back(nums1[indexleft]);
                indexleft++;
            }
            else
            {
                merged.push_back(nums2[indexright]);
                indexright++;
            }
        }

        while(indexleft<nums1.size())
        {
            merged.push_back(nums1[indexleft]);
                indexleft++;
        }

        while(indexright<nums2.size())
        {
            merged.push_back(nums2[indexright]);
                indexright++;
        }

        int mid=merged.size()/2;
        
        if(merged.size()%2==0) return double(merged[mid]+merged[mid-1])/2.0;
        else return merged[mid];
    }
};
