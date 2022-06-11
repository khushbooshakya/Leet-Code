// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
       int closestToZero(int arr[], int n){
           sort(arr, arr+n);
           int l = 0;
           int r = n-1;
           int res = arr[0] + arr[n-1];
           while (l < r){
               int sum = arr[l] + arr[r];
               if (sum == 0){
                   return 0;
               }if (sum < 0){
                   l++;
               }else{
                   r--;
               }if (abs(sum) < abs(res)){
                   res = sum;
               }
               if (abs(sum) == abs(res)){
                   res = max(res, sum);
               }
           }return res;
       }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends