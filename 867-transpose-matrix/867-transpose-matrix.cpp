// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int i;
//      int m=matrix.size();
//         int n=matrix[i].size();
//         vector<vector<int>> res(m,vector<int> (n,0));
//     for( int i =0;i<matrix.size();i++){
//         for (int j =0;j<matrix[i].size();j++){
//             res[i][j]=matrix[j][i];
            
//         }
       
//     }  
//         return res;
//     }
// };
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>tp(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tp[j][i]=matrix[i][j];
            }
        }
        return tp;
    }
};
