class Solution {
public:
    /* Sorting 
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
    */
    
    void sortColors(vector<int>& nums) {
        int c=0;
        int o=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
           else if(nums[i]==1){
                o++;
            }
        }
        for(int i=0;i<c;i++){
            nums[i]=0;
        }
         for(int i=c;i<c+o;i++){
            nums[i]=1;
        }
         for(int i=c+o;i<nums.size();i++){
            nums[i]=2;
        }  
    }
};