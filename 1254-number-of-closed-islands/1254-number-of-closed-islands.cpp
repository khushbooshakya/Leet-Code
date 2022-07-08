class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int i, int j)
    {
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() )
            return false;
        if(grid[i][j]==1) 
            return true;
        
        grid[i][j] = 1;
        
        bool up = dfs(grid, i-1,j);
        bool right = dfs(grid, i,j+1);
        bool down = dfs(grid, i+1,j);
        bool left = dfs(grid, i,j-1);
        
        return up && right && down && left;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]==0 && dfs(grid, i, j)==true)
                {
                    count++;
                }
                else continue;
            }
        }
        return count;
    }
};