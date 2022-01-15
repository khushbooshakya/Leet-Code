class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int, vector<int>> loc; 
        for (int i = 0; i < arr.size(); ++i) loc[arr[i]].push_back(i); 
        
        int ans = 0, n = arr.size(); 
        deque<int> q; q.push_back(0); 
        vector<bool> seen(n); 
        seen[0] = true; 
        
        for (; q.size(); ++ans) 
            for (int sz = q.size(); sz; --sz) {
                int i = q.front(); q.pop_front();
                if (i+1 == n) return ans; 
                vector<int>& cand = loc[arr[i]]; 
                cand.push_back(i-1); 
                cand.push_back(i+1); 
                for (auto& ii : cand) 
                    if (0 <= ii && ii < arr.size() && !seen[ii]) {
                        seen[ii] = true; 
                        q.push_back(ii); 
                    }
                cand.clear(); 
            }
        return -1; 
    }
};