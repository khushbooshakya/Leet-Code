class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        
        int mx = INT_MIN,count=1;                          //mx- length of longest consecutive sequence 
        int mxnums = INT_MIN,mnnums=INT_MAX;               //mxnums - max element which may have consecutive element before that,mnnums-min element for same purpose
        int start = INT_MAX;                               //minimum element in nums
        int end = INT_MIN;                                 //maximum element in nums
        
        unordered_map<int,int>map;                         //map to store freq of element 
        for(int x:nums)map[x]++;
        
        for(int i=0;i<nums.size();i++){
            if(map[nums[i]-1]!=0 && map[nums[i]+1]==0){
                mxnums = max(mxnums,nums[i]);               
            }
            if(map[nums[i]-1]==0 && map[nums[i]+1]!=0){
                mnnums = min(mnnums,nums[i]);
            }
            start = min(start,nums[i]);
            end = max(end,nums[i]);
        }
        
        end = min(mxnums,end);                             //updating end to max element which has consecutive elements
        start = max(mnnums,start);                         //updating start to smallest element which has consective elements
        
        
        for(int i=start;i<end;i++){
            if(map[i+1]!=0)count++;                        //traversing from start to end and increasing count if found consecutive elements
            else{
                mx = max(mx,count);                        //storing count in mx if not found consecutive element 
                count=0;
            }
        }
        
        mx = max(mx,count);                             
        
        return mx;                                         //returning mx length of consecutive elements
    }
};