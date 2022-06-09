class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(0);
        int left=0; 
        int right=numbers.size()-1; 
        for(int i=0;i<numbers.size();i++){
            if((numbers[left]+numbers[right])==target && (left!=right)){    
                int index1=left+1;        
                int index2=right+1;
                ans.push_back(index1);
                ans.push_back(index2);
                break;                      
                
            }     
            else{
                if((numbers[left]+numbers[right]) >target){
                    right--;
                }
                else{                    
                    left++;
                }
            }
        }
        return ans;   
    }
};