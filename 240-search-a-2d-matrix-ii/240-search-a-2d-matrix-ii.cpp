// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
         
//         int m =matrix.size();
//         int n =matrix[0].size();
//         int r=0,c=n-1;
//         while(r<m&&c>=n){
       
//         if(matrix[r][c]==target) 
//              return true;
        
//         else if(matrix[r][c]<target)
//             r++;
        
//         else
//             c--;
        
//         }
//               return false;  
//         }
    
// };
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();

        int i=0,j=col-1;

        while(j>=0 && i<row){

            if(matrix[i][j] == target){
                return true;
            }else if(matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};