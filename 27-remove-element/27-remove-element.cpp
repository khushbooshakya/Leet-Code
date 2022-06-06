class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=-1,j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]!=val){
                i++;
                swap(nums[i],nums[j]);
            }
            j++;
        }
        return i+1;
    }
};