class Solution {
public:
    int search(vector<int>& nums, int target) {
     int lo=0;
     int hi=nums.size()-1;

       
        while(lo<=hi)
        {
            int m=lo+(hi-lo)/2;
            if(nums[m]==target){
            return m;
        }
        else if(nums[m]>=nums[lo]){
            if(nums[lo]<=target&&nums[m]>target){
               hi=m-1; 
            }
            else{
                lo=m+1;
            }
        }
        else {
            if(nums[hi]>=target&&nums[m]<target){
                lo=m+1;
            }
            else{
                hi=m-1;
            }
        }
        }
     return -1;  
    }
};
    