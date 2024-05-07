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
        long long r = n,l = 1;
        int m, g;
        while(r>=l){
            m=(r+l)/2;
            g = guess(m);
            if(g == 0)
                return m;
            if(g == -1)
                r = m-1;
            if( g ==1)
                l = m+1;
        }
        return -1;
    }
};