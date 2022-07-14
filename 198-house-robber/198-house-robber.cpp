class Solution {
public:
    int rob(vector<int>& nums) {
         int prev1=nums[0];
	int prev2=0;
	int pick=0;
	int notPick=0;
	int curr;

	for(int i=1;i<nums.size();i++){
		if(i>1) pick=nums[i]+prev2;
		else pick=nums[i];

		notPick=prev1;

		curr=max(pick,notPick);

		prev2=prev1;
		prev1=curr;  
	}
	return prev1;
    }
};