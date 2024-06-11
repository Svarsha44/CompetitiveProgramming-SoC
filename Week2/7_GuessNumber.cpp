/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long a=1;
        long long b=n;
        while(a<=b)
        {
            long long mid=(a+b)/2;
            int k=guess(mid);
            if(k==0) return mid;
            else if(k==-1) b=mid-1;
            else a=mid+1;
        }

        return -1;

    }
};
