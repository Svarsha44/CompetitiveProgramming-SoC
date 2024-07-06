class Solution {
public:
   const int num=1337;
    long long powrem(int a, int b)
    {
        if(b==0) return 1;
        long long result=1;

        while(b)
        {
            if(b&1) result=(result*a)%num;
            a=(a*a)%num;
            b>>=1;
        }
        return result;
    }


    int superPow(int a, vector<int>& b) {
        a=a%num;
        if(a==0) return 0;
        int prev=a, result=1;
        for(int i=b.size()-1; i>=0; i--)
        {
            result=(result*powrem(prev,b[i]))%num;
            prev=powrem(prev,10);
        }
        return result;
    }
};
