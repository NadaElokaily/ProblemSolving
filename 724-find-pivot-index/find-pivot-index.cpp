class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size(), post_c, post_p;
        vector<int> pre(size) ;
        pre[0] = nums[0];
        for(int i = 1; i<size; i++){
            pre[i] = pre[i-1] + nums[i];
        }
        for(int i = 0; i<size; i++){
            if (i==0)
                post_c = pre[size-1];
            else
                post_c = post_p - nums[i-1];
            if(post_c == pre[i]) return i;
            post_p = post_c;
        }
        return -1;
    }
};