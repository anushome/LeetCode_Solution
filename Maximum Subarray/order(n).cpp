class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_sum_so_far  = 0;
        int max_sub_array = INT_MIN;
        
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] < max_sum_so_far + nums[i])
                max_sum_so_far += nums[i];
            else
                max_sum_so_far = nums[i];
            
            if (max_sum_so_far > max_sub_array)
                max_sub_array = max_sum_so_far;
            
        }
        return max_sub_array;
        
    }
};
