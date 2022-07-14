class Solution {
public:
    bool solve(vector<int>&nums,int i,vector<vector<int>>&dp,int sum){
        if(sum==0){
            return true;
            
        }
        if(i==0){
            return false;
        }
        if(dp[i][sum]!=-1)return dp[i][sum];
        bool take=false;
        if(nums[i]<=sum)
         take=solve(nums,i-1,dp,sum-nums[i]);
        bool nonTake=solve(nums,i-1,dp,sum);
        return dp[i][sum]=take|nonTake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int i=nums.size();
      vector<vector<int>>dp(i,vector<int>((sum/2)+1,-1));
        return solve(nums,i-1,dp,sum/2);
    }
};