class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> freq(10 , 0);
        while(n > 0){
            freq[n%10]++;
            n/=10;
        }
        
        int pow = 1;
        while(pow <= 1e9 ){
            vector<int> tf(10 , 0);
            int tem = pow;
            while(tem > 0){
                tf[tem % 10]++;
                tem/=10;
            }
            if(tf == freq) return 1;
            pow<<=1;
        }
        return 0;
    }
};