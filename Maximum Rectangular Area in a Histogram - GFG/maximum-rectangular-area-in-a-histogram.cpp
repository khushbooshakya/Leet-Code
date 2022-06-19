// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
   long long getMaxArea(long long arr[], int n)
    {
        stack<int> s;
        vector<int> le(n,0);
        long long int ans= 0;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[i]<=arr[s.top()]){
                int x=s.top();
                ans=max(ans,(i-x+le[x])*arr[x]);
                s.pop();
            }
            le[i] = s.empty() ? i: i-s.top()-1;
            s.push(i);
        }
        while(!s.empty()){
            ans=max(ans,(le[s.top()]+n-s.top())*arr[s.top()]);
            s.pop();
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends