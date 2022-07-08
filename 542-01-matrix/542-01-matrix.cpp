class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={-1,1,0,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]!=0)
                    mat[i][j]=INT_MAX-1;
            }
        }
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    
                    q.push({i,j});
                }
            }
        }
        while(q.empty()==false)
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int idx=0;idx<4;idx++)
            {
                int nx=x+dx[idx];
                int ny=y+dy[idx];
                if(nx>=0 && ny>=0 && nx<n && ny<m && mat[nx][ny]>mat[x][y]+1)
                {
                    q.push({nx,ny});
                    mat[nx][ny]=1+mat[x][y];
                }
            }
        }
        return mat;
    }
};