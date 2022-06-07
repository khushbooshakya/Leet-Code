class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        bool flag=false;
       if(n%3==0){
           
           flag=true;
           
       }
     return flag && isPowerOfThree(n/3); 
    }
};