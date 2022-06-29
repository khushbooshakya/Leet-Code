class Solution {
public:
    int ct = 0; 
    
    vector<pair<int, int> > movements = {
        {0, 1}, {1,0}
    };
    bool isvalid(int i, int j, int m, int n)
    {
        return i>=0 && j>=0 && i<m && j<n;
    }
    
    int dp[150][150];
    
    void generate(int i, int j, int m, int n, vector<vector<int>> &obstacleGrid)
    {
        int ct1 = ct;
        if(dp[i][j] != -1)
        {
            ct += dp[i][j];
            return;
        }
        if(i == m-1 && j == n-1)
        {
            ct += 1;
            return;
        }
               
        for(auto movement: movements)
        {
            int newi = i + movement.first;
            int newj = j + movement.second;
            
            if(!isvalid(newi, newj, m, n)) continue;
            if(obstacleGrid[newi][newj] == 1) continue;
            generate(newi, newj, m, n, obstacleGrid);        
        }
   
        dp[i][j] = ct-ct1;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        memset(dp, -1, sizeof(dp));
        
        if(obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1) return 0;
        
        generate(0, 0, m ,n, obstacleGrid);
        return ct;
        
    }
};