// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
vector<int>v;
   void help(vector<int>Arr,int start,int end)
   {
       if(end==Arr.size())
       {
           return ;
       }
       else if(start>end)
       {
          help(Arr,0,end+1);            
       }
       else
       {
           int sum=0;
           for(int i=start;i<end;i++)
           {
               sum+=Arr[i];
           }
           sum+=Arr[end];
           v.push_back(sum);
           help(Arr,start+1,end);
       }
       return ;
   }
   int kthLargest(vector<int> &Arr,int N,int K){
      
     // vector<int>v;
      help(Arr,0,0);
      sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
      return v[K-1];
   }
};
// { Driver Code Starts.

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N;
        cin>>K;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        int ans=ob.kthLargest(Arr,N,K);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends