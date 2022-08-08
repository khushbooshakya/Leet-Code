class Solution {
public:
    int lengthOfLIS(vector<int>& A) {
        set<int>f;
        for(int i : A){
            f.insert(i);
        }
        vector<int>B(f.begin(),f.end());

        vector<vector<int>>dp(A.size() + 1,vector<int>(B.size() + 1));
        
        for(int i = 1; i <= A.size(); i++){
            for(int j = 1; j <= B.size(); j++){
                if(A[i - 1] == B[j - 1]){
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[A.size()][B.size()];
    }
};
