class Solution {
   public:
 
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int pre_product{1}, post_product{1};
        for (int i{0}; i < nums.size() - 1; i++) {
            pre_product *= nums[i];
            result[i + 1] = pre_product;
        }
        for (int i = nums.size() - 1; i > 0; i--) {
            post_product *= nums[i];
            result[i - 1] *= post_product;
        }
        return result;
    }
};