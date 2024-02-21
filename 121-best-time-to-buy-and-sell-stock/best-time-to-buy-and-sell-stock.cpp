#include <algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
        int maxp = 0, l=0, r=0;
        while(r < prices.size()){
            if (prices[l] < prices[r])
                maxp = max(maxp, (prices[r]-prices[l]));
            else
                l = r;
            r++;
        }
        return maxp;
    }
};