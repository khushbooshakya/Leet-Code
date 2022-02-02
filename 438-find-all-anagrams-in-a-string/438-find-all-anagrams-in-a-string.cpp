class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       if(s.size() < p.size())
       return {};
       unordered_map<char, int> mp;
       for(char it : p)
       {
           mp[it]--;
       }
       for(int i= 0; i<p.size(); i++)
       {
           if(++mp[s[i]] == 0)
           mp.erase(s[i]);
       } 
       vector<int> ans;
       if(mp.empty())
       ans.push_back(0);
       for(int i=p.size(), j = 0; i<s.size(); i++, j++)
       {
           if(++mp[s[i]] == 0)
           mp.erase(s[i]);
           if(--mp[s[j]] == 0)
           mp.erase(s[j]);
           if(mp.empty())
           ans.push_back(j+1);
       }
       return ans;
    }
};