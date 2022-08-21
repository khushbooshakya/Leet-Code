class Solution {
public:
    bool isAnagram(string s, string t) {
        // if length is not same , they can't be anagram.
        if (s.size()!=t.size()){
            return false;
       }
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
          return s==t;
    }
};