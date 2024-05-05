class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        vector<int> pre(size), post(size) ;
        pre[0] = nums[0];
        for(int i = 1; i<size; i++){
            pre[i] = pre[i-1] + nums[i];
        }
        post[0] = pre[size-1];
        for(int i = 1; i<size; i++){
            post[i] = post[i-1] - nums[i-1];
        }
        for(int i = 0; i< size; i++){
            if(post[i] == pre[i]) return i;
        }
        return -1;
    }
};