class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        bool flag=false;
       if(n%4==0){
           
           flag=true;
           
       }
     return flag && isPowerOfFour(n/4);  
    }
};