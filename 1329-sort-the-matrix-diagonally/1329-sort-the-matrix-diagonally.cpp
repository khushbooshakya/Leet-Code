class Solution {
public:
    void sortDiagonal(vector<vector<int>>& mat, uint8_t i, uint8_t j, uint8_t m, uint8_t n) {
        multiset<uint8_t> d;
        for(uint8_t p = i, q = j; p < m && q < n; d.insert(mat[p][q]), p++, q++);
        for(auto it = d.begin(); it != d.end(); mat[i][j] = *it, i++, j++, it++);
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        uint8_t m = mat.size();
        uint8_t n = mat[0].size();

        for(uint8_t i = 0; i < m; i++)
            sortDiagonal(mat, i, 0, m, n);
        for(uint8_t j = 1; j < n; j++)
            sortDiagonal(mat, 0, j, m, n);

        return mat;
    }
};