class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        if(n==0 || n==1){
            return n;
        }
        n-=1;
        int c = 0;
        while(n--){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};