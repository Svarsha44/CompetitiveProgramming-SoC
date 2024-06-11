class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len1=s.length();
        int len2=t.length();
        int i=0,j=0;

        while(i<len1 && j<len2)
        {
            if(t[j]==s[i])
            {
                i++;
                j++;
            }
            else j++;
        }

        if(i==len1 && j<=len2) return true;
        else return false;
    }
};
