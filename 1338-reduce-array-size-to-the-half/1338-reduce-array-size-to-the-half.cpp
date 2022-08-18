class Solution {
public:
    static bool compare(pair<int,int>& a,pair<int,int>& b){
        return a.first>b.first;
    }
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mapy;
        for(int i=0;i<arr.size();i++){
            mapy[arr[i]]++;
        };
        vector<pair<int,int>>v;
        for(auto i:mapy){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),compare);
        int numbers=0,totalCount=0;
        for(auto i:v){
            if(totalCount>=arr.size()/2){
                break;
            }
            totalCount+=i.first;
            numbers++;
        }
        
        return numbers;
        
    }
};