class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums2;
        
		//for cases when the number of rotations is greater than the total length of vector
        if(k > nums.size()) {
            k = k % nums.size();
        }
        
		//iterating from k to the end
        for(int i = nums.size() - k; i < nums.size(); i++){
            nums2.push_back(nums[i]);
        }
		
		//iterating from beginning upto the rotation position
        for(int i = 0; i < nums.size() - k; i++) {
            nums2.push_back(nums[i]);
        }
        
		//copying the result array to the original array
        nums = nums2;
    }
};