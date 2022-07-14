class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int mx=0;
        int mn=INT_MAX;
        int n=nums.size();
        int ans = 2;
        
       	vector<vector<int> > dp(n, vector<int>(n, -1));
	    map<int, int> pos;
	    for (int i = 0; i < n; i++) {
		    for (int j = i + 1; j < n; j++) {
			    dp[i][j] = 2;
			    int dif = nums[j] - nums[i];
			    int need = 2 * nums[i] - nums[j];
			    if (pos.count(need) == 0) continue;
			    dp[i][j] = max(dp[i][j], dp[pos[need]][i] + 1);
		    }
		pos[nums[i]] = i;
	    }

	    for (int i = 0; i < n; i++) {
		    for (int j = i + 1; j < n; j++) {
			    ans = max(ans, dp[i][j]);
		    }
	    }

	    return ans;
    }
};