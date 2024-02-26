class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1, res = nums[0], m;
        while( l <= r){
            if(nums[l] < nums[r]){
                res = min(res, nums[l]);
                break;
            }
            m = l + (r-l)/2;
            res = min(res, nums[m]);
            if(nums[m] < nums[r]){
                r = m-1;
            }
            else{
                l = m+1;
            }

        }
        return res;
    }
};