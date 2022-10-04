class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector <string>>ans ; 
        unordered_map<string , vector<string>> umap;
        for(auto x:strs){
            string temp =x; 
            sort(x.begin(), x.end());
            umap[x].push_back(temp); //phla string aya x , ushko sort kiya , sort krne ke bad usse hme ushka key pata lg gya . Ush key par jo corresponding vector tha , ushme hmne temp ko push kar diya jo real string tha ushko . 
        }
        for(auto x: umap){
            ans.push_back(x.second); 
        }
        return ans;
    }
};