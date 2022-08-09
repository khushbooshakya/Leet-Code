class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int result=0;
        int i =0;
        for( i=0;i<n;i++){
             result=result^nums[i]^i+1;
        }
        return result;
    }
};