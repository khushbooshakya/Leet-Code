class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute Force approach
        //Time complexity - O(n^3)
        //Space Complexity - O(1)
        /*
            iterate over all the subarrays
            1st loop - 0 to n-1
            2nd loop - o to n-1
            3rd loop - i to j
                find sum and store maximumsum
        */
        // int max_sum = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //         int sum =0;
        //         for(int k = i;k<=j;k++){
        //             sum = sum + nums[k];
        //         }
        //         if(sum > max_sum){
        //             max_sum = sum;
        //         }
        //     }
        // }
        // return max_sum;
        
        //Time complexity - O(n^2)
        //Space Complexity - O(1)
        /*
            quadratic time complexity
            1st loop - 0 n-1
            2nd loop - i to n-1
                find sum and store maximum
        */
        // int maxi = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     int sum =0;
        //     for(int j=i;j<nums.size();j++){
        //              sum+=nums[j];
        //          maxi = max(maxi, sum);
        //     }
        // }
        // return maxi;
        
        //Time complexity - O(n)
        //Space Complexity - O(1)
        /*
            kadanes algo!
            cur_sum =0 and maximum sum = minimum value
            linear traversal on the array
                add element to cur_sum and check maxsum and update
                and if cur_sum is negative, make cur_sum as 0
        */
        int max_sum = INT_MIN;
        int cur_sum = 0;
        for(int i=0;i<nums.size();i++){
            cur_sum+= nums[i];
            if(max_sum<cur_sum)
                max_sum = cur_sum;
            if(cur_sum<0)
                cur_sum =0;
        }
        return max_sum;
        
    }
};