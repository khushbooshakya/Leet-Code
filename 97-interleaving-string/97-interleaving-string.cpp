class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1));
        dp[0][0]=1;
        if(s1.size()+s2.size()!=s3.size())
            return false;
        for(int i=1;i<=s1.size();i++)
        {
            if(s1[i-1]==s3[i-1] &&dp[i-1][0]==1)
            {
                dp[i][0]=1;
            }
        }
        dp[0][0]=1;
        for(int j=1;j<=s2.size();j++)
        {
            if(s2[j-1]==s3[j-1] && dp[0][j-1]==1)
            dp[0][j]=1;
        }
        for(int i=1;i<=s1.size();i++)
        {
            for(int j=1;j<=s2.size();j++)
            {
                if(dp[i-1][j]==1 && (s1[i-1]==s3[i+j-1]))
                    dp[i][j]=1;
                else if(dp[i][j-1]==1 && (s2[j-1]==s3[i+j-1]))
                {
                     dp[i][j]=1;
                }
                   
            }
        }
        return dp[s1.size()][s2.size()];
    }
};