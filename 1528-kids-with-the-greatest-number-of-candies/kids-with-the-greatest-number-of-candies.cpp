class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_ = 0;
        vector<bool> result;
        for(auto i : candies){
            max_ = max(i,max_);
        }
        for(auto i: candies){
            result.push_back((((i+extraCandies)>=max_)? true : false));
        }
        return result;
    }
};