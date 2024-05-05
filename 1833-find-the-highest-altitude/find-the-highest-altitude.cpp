class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_gain = 0, sum_gain = 0;
        for(auto a : gain){
            sum_gain+=a;
            max_gain = max(max_gain, sum_gain);
        }
        return max_gain;
    }
};