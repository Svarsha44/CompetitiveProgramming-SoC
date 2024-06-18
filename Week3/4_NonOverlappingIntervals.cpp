class Solution {
public:
     static bool customcomp(vector<int> &a,vector<int> &b )
    {
       if(a[1]!=b[1]) return a[1]<b[1];
       else return a[0]>b[0];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),customcomp);
        int begin=intervals[0][0];
        int end=intervals[0][1];
        int count=1;

        for(auto num:intervals)
        {
            if(num[0]<end) continue;
            else 
            {
                begin=num[0];
                end=num[1];
                count++;
            }
        }
        return intervals.size()-count;
    }
};
