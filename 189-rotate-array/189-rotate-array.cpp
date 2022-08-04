class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        // for(int i=0;i<n;i++){
        //     if(i<=k){
        //         nums[i]=nums[i+k];
        //     }
        //     else{
        //         nums[i]=nums[i-k];
        //     }
        // }
        k%=nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
};