class Solution {
public:
    bool valid(int i, int j, int n, int m)
    {
        return i>=0 and i<n and j>=0 and j<m;
    }
    void bfs(vector<vector<int>> &grid, int i, int j, int n, int m, int &ans)
    {
        queue<pair<int,int>> qu;
        qu.push({i,j});
        int area = 0;
        grid[i][j] = 2;
        area++;
        // cout<<"here"<<endl;
        while(!qu.empty())
        {
            int x = qu.front().first;
            int y = qu.front().second;
            qu.pop();
            
            if(valid(x-1, y, n, m))
            {
                if(grid[x-1][y] == 1)
                {
                    area++;
                    grid[x-1][y] = 2;
                    qu.push({x-1, y});
                }
            }
            if(valid(x+1, y, n, m))
            {
                if(grid[x+1][y] == 1)
                {
                    area++;
                    grid[x+1][y] = 2;
                    qu.push({x+1, y});
                }
            }
            if(valid(x, y-1, n, m))
            {
                if(grid[x][y-1] == 1)
                {
                    area++;
                    grid[x][y-1] = 2;
                    qu.push({x, y-1});
                }
            }
            if(valid(x, y+1, n, m))
            {
                if(grid[x][y+1] == 1)
                {
                    area++;
                    grid[x][y+1] = 2;
                    qu.push({x, y+1});
                }
            }
            
            
        }
        
        ans = max(ans, area);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(grid[i][j] == 1)
                {
                    bfs(grid, i, j, n, m, ans);
                }
            }
        }
        return ans;
    }
};