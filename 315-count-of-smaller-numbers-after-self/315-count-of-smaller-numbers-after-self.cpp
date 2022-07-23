class Solution {
public:

void merge(vector<pair<int,int>> &nums, int start, int mid, int end, vector<int> &res){
    
    int n = mid-start+1;
    int m = end - mid;
    
    vector<pair<int,int>> v1(n);
    vector<pair<int,int>> v2(n);
    
    for(int i=0; i<n; i++){
        v1[i] = nums[start+i];
    }
    
    for(int i=0; i<m; i++){
        v2[i] = nums[mid+1+i];
    }
    
    int k = start;
    int i=0;
    int j = 0;
    
    int count = 0;
    
    while(i<n and j<m){
        
        int a = v1[i].first;
        int ind = v1[i].second;
        int b = v2[j].first;

        
        if(a <= b){
            
            nums[k] = v1[i];
            
            res[ind] += count;
            i++;
        }
        else{
            
            nums[k] = v2[j];
            count++;
            j++;
        }
        
        
        k++;
    }
    
    
    for( ; i<n; i++){
        
        int ind = v1[i].second;
        
        res[ind] += count;
        
        nums[k] = v1[i];
        k++;
        
    }
    
    for( ; j<m; j++){
        
        nums[k] = v2[j];
        k++;
    }
    

    
}


void mergeSort(vector<pair<int,int>> &nums, int start, int end, vector<int> &res){
    
    if(start >= end) return;
    int mid = (start+end)>>1;
    
    mergeSort(nums, start, mid, res);
    mergeSort(nums, mid+1, end, res);
    
    
    merge(nums, start, mid, end, res);
    
}


vector<int> countSmaller(vector<int>& arr) {
    
    int n = arr.size();
    vector<pair<int,int>> nums(n);
    
    for(int i=0; i<n; i++){
        nums[i] = {arr[i], i};
    }
    
    vector<int> res(n, 0);
    
    mergeSort(nums, 0, n-1, res);
    
    return res;
}
};