class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        bool flag=false;
       if(n%2==0){
           
           flag=true;
           
       }
     return flag && isPowerOfTwo(n/2);
    }
};