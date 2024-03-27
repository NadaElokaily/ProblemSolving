class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() <= 1) return;
        int fast = 1, slow = 0;
        while(fast<nums.size()){
            if ((nums[slow] == 0) && nums[fast]){
                nums[slow] = nums[fast];
                nums[fast] = 0;
            }
            if(nums[slow]) 
                slow++;            
            fast++;
        }
    }
};