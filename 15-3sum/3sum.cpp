class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l,r,t;
        vector<vector<int>> soln;
        sort(nums.begin(), nums.end());
        for (int i =0; i<nums.size(); i++){
            if((i>0) && (nums[i]==nums[i-1]))
            {
                continue;
            }
            l = i+1; r = nums.size()-1; t = 0-nums[i];
            while(l < r){
                if(t < (nums[l]+nums[r])){
                    r--;
                }
                else if(t > (nums[l]+nums[r])){
                    l++;
                }
                else{
                    soln.push_back(vector<int>{nums[i],nums[l], nums[r]});
                    l++;
                    while (l<r)
                    {
                        if (nums[l]==nums[l-1])
                            l++;
                        else
                            break;
                    }   
                }                 
            }      
        }
        return soln;
    }
};