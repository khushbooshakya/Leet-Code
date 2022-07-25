class Solution {
     int firstpos(vector<int>& nums,int target){
         if(nums.size()==0){
                return -1;
            }
            int ans=-1;
            int lo=0,hi=nums.size()-1;
            while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(nums[mid]==target){
                        ans=mid;
                        hi=mid-1;
                    }
                    else if(nums[mid]>=target){
                         hi= mid-1;
                      
                    }
                    else{
                       lo= mid+1;
                    }
            }
            return ans;
        }
    int lastpos(vector<int>& nums,int target){
            if(nums.size()==0){
                return -1;
            }
            
            int ans=-1;
            int lo=0,hi=nums.size()-1 ;
            
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                    if(nums[mid]==target){
                        ans=mid;
                        lo=mid+1;
                        
                    }
                    else if(nums[mid]<=target){
                      lo=  mid+1;
                    }
                    else{
                       hi= mid-1;
                    }
                }
            return ans;
    }
   
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0] = firstpos(nums , target);
        ans[1] = lastpos(nums , target);
        return ans;

    }
};

