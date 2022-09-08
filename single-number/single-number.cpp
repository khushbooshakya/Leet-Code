class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int>mp;
        //traverse through array element and stores frequencies
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x :mp)//traversing in a map 
        {
            if(x.second==1) //if the frequency of element in array is equal to 1 than print element
            {
                return x.first;
            }
        }
        return -1;
    }
};