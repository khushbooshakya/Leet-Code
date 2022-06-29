// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  long long numberOfWays(long long n) {
        long long dp[n + 1];
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++){
            dp[i] = (dp[i-1] + dp[i-2])%1000000007;
        }
        
        return dp[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends