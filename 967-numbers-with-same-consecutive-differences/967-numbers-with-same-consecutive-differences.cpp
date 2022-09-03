class Solution {
    vector<int> ans;
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++)
            formNum(i, n-1, k, 0);
        return ans;
    }
private:
    void formNum(int num, int n, int k, int siz){
        if(siz == n){
            ans.push_back(num);
            return;
        }
        int idx = num%10;
        if(idx+k<=9)
            formNum(num*10+idx+k, n, k, siz+1);
        if(k!=0 && idx-k>=0)
            formNum(num*10+idx-k, n, k, siz+1);
    }
};