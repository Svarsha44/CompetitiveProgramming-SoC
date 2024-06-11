class Solution {
public:
    int maxVowels(string s, int k) {
        int max_count=0,count=0;
        
        for(int i=0; i<k; i++) {char c=s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;}
        max_count=count;

        for(int i=k; i<s.size(); i++)
        {
            char c=s[i];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;
            c=s[i-k];
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count--;
            max_count=max(max_count,count);
        }
        return max_count;
    }
};
