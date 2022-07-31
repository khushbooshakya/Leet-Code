class Solution {
public:
//     bool containsDuplicate(vector<int>& nums) {
//          unordered_set<int> s{nums.begin(), nums.end()};
//         return s.size() != nums.size();
        
//     }
      int containsDuplicate(vector<int>& nums) {
         unordered_set<int> s{nums.begin(), nums.end()};
        return  nums.size()-s.size();
        
    }
};
//agar no of element 4 hai nd ushme index 3 tk hi like 1,2,3,1 (ishme 1,2,3 tk hi hai ,4 nhi hai ) to bo array mai atleast ek na ek element repeat kr ra hoga

// O(1)