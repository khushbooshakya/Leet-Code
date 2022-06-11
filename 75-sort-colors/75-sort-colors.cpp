class Solution {
public:
    void swap(vector<int>& v, int i, int j) {
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
    
    int partition(vector<int>& v, int l, int r) {
        const int x = v[l];
        
        int i = l-1;
        int j = r+1;
        for (;;) {
            while (x < v[--j]);
            while (v[++i] < x);
            if (i >= j) return j;
            swap(v, i, j);
        }
    }
    
    void quick_sort(vector<int>& v, int l, int r) {
        if (l < r) {
            int q = partition(v, l, r);
            quick_sort(v, l, q);
            quick_sort(v, q+1, r);
        }
    }
    
    void quick_sort(vector<int>& v) {
        quick_sort(v, 0, v.size()-1);
    }
    
    void sortColors(vector<int>& nums) {
        quick_sort(nums);
    }
};