class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> charac = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--",
			"-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
        unordered_set<string> mp;
        
        for(auto word: words){
            string s;
            for(auto ch : word){
                s += charac[ch-'a'];
            }
            mp.insert(s);
        }
        return mp.size();
    }
};