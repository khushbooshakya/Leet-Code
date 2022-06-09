class Solution {
public:
 int firstindex(vector<int>nums,int target)
    {
        if(nums.size()==0)
            return -1;
        int i=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            int mid = i+(j-i)/2;
            if(nums[mid]>=target)
            {
                j=mid-1;
            }
            else
                i = mid+1;
        }
        if(i<nums.size() && i>=0 && nums[i]==target)
            return i;
        return -1;
    }
    int lastindex(vector<int>nums,int target)
    {
        if(nums.size()==0)
            return -1;
        int i=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            int mid = i+(j-i)/2;
            if(nums[mid]<=target)
            {
                i=mid+1;
            }
            else
                j = mid-1;
        }
        if(j>=0 && j<nums.size() && nums[j]==target)
            return j;
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>vec;
        vec.push_back(firstindex(nums,target));
        vec.push_back(lastindex(nums,target));
        return vec;
    }

};
