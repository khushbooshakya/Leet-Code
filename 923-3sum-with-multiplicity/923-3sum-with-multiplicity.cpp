class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
         long res = 0, mod = 1e9+7;
        std::sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size()-2; i++){
            int left=i+1, right=arr.size()-1;
            while( left < right ){ 
                int sum = arr[i] + arr[left] + arr[right];
                if( sum == target ){
                    int permu1 = 1, permu2 = 1;
                    while( left < right && arr[left]==arr[left+1] ) 
                        left++, permu1++;
                    while( left < right && arr[right]==arr[right-1] ) 
                        right--, permu2++;
                    res += ( arr[left]==arr[right] ? 
                                permu1*(permu1-1)/2 : permu1*permu2) % mod;
                    left++, right--;
                } 
                else if( sum < target ) left++;
                else if( sum > target ) right--;
            }
        } return res % mod;
        
    }
};