// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
         int *ans=new int [2];
        ans[0]=-1; ans[1]=-1;
        unordered_map<int,int> m;
        int c=INT_MAX,b=INT_MIN;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            c=min(c,arr[i]);
            b=max(b,arr[i]);
            if(m[arr[i]]>1){ans[0]=arr[i];}
        }
        if(c!=1){ans[1]=1;}
        else{
            for(int i=c+1;i<=b+1;i++){
                if(m[i]<1){ ans[1]=i; break; }
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends