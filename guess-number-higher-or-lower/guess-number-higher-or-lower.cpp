/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int h=n;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            int ele=guess(m);
            if(ele==0)
            {
                return m;
            }
            else if(ele<0)
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return -1;
    }
};